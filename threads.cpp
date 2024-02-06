#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <sys/wait.h>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <fstream>
#include <thread>
#include <chrono>
#include <mutex>

using namespace std;

// function to return a random value
int GetRandom(int max = 3) {
    srand(time(NULL));
    return rand() % max;
}

void ExecuteThread(int id) {
    // get time from chrono, convert it to time_t and local time
    auto time = chrono:: system_clock::now();
    time_t sleepTime = chrono::system_clock::to_time_t(time);
    tm myLocalTime = *localtime(&sleepTime);

    // print out the thread id and sleep time
    cout << "!!! Thread: " << id <<
        ", is SLEEPING: " << ctime(&sleepTime)
        << endl;

    // print out the date and time
    cout << "Day / Month / Year: " <<
        myLocalTime.tm_mday << " / " <<
        myLocalTime.tm_mon << " / " <<
        myLocalTime.tm_year + 1900 << endl;

    cout << "HH:MM:SS: " <<
        myLocalTime.tm_hour << ":" <<
        myLocalTime.tm_min << ":" <<
        myLocalTime.tm_sec << endl;

    // set the thread to sleep for 1-3 seconds
    this_thread::sleep_for(chrono::seconds(GetRandom()));

    // set the time and sleep time after the thread sleep
    time = chrono::system_clock::now();
    sleepTime = chrono::system_clock::to_time_t(time);

    // print out the thread id and sleep time
    cout << "!!! Thread: " << id <<
        ", has AWOKEN: " << ctime(&sleepTime) << endl;
}

int main(int argc, char** argv) {

    // THREADS
    // threads are blocks of code that will execute at the same time

    thread t1 (ExecuteThread, 1); // create a thread and add a function to run
    t1.join(); // join this thread to the main thread

    // add a second thread
    thread t2 (ExecuteThread, 2);
    t2.join();

    return 0;
}
