#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <fstream>
#include <memory>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {

    // ALLOCATING MEMORY
    // memory is allocated with malloc() and released with delete

    // ask how many numbers to store, so we can calulate the amount of memory needed
    int memoryRequired;
    cout << "How many numbers do you want to store? ";
    cin >> memoryRequired;

    cout << "MANUAL MEMORY EXAMPLE" << endl;
    
    int* numbers; // create a pointer to our numbers
    
    numbers = (int*) malloc(memoryRequired * sizeof(int)); // allocate the memory with malloc

    // if the memory allocated (pointer isn't NULL) we ask for numbers to fill the memory with
    if (numbers != NULL) {
        int i = 0;
        while (i < memoryRequired) {
            cout << "Enter a number [MME]: ";
            cin >> numbers[i];
            i++;
        }
    }

    // print out all the numbers
    cout << "Your numbers:" << endl;
    for (int i = 0; i < memoryRequired; i++) {
        cout << numbers[i] << endl;
    }

    delete numbers; // free the memory by deleting the pointer

    // SMART POINTERS
    // smart pointer are automatically freed from memory when they fall out of scope
    // in this case once main() has finished executing

    cout << "SMART POINTER EXAMPLE" << endl;

    unique_ptr<int[]> numbers2(new int[memoryRequired]); // create a new smart pointer of the same size as before

    // again we check if the memory allocated (pointer isn't NULL) and ask for numbers to fill the memory
    if (numbers2 != NULL) {
        int i = 0;
        while (i < memoryRequired) {
            cout << "Enter a number [SPE]: ";
            cin >> numbers2[i];
            i++;
        }
    }

    // print out all the numbers
    cout << "Your numbers:" << endl;
    for (int i = 0; i < memoryRequired; i++) {
        cout << numbers2[i] << endl;
    }

    // No need to delete the pointer to free the memory!
    
    return 0;
}
