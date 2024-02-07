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
#include <iterator>
#include <deque>
#include <list>
#include <forward_list>

using namespace std;

int main(int argc, char** argv) {
    
    // CONTAINERS, PART II
    // more on double ended queues, lists and forward lists

    // a deque is a dynamic array, like a vector, but it allows us to add and remove items to/from the start and end
    deque<int> mydeque;
    mydeque.push_back(100); // push_back() like a vector, but also . . .
    mydeque.push_front(1); // we can push_front() to add a value to the start of the array 
    
    cout << "Size of mydeque: " << mydeque.size() << endl;
    for (auto i: mydeque) {
      cout << i << endl;
    }
    
    mydeque.assign({500, 1000}); // we can overwrite the exsisting values with assign()
    
    cout << "Size of mydeque: " << mydeque.size() << endl;
    for (auto i: mydeque) {
      cout << i << endl;
    }
    
    cout << mydeque[0] << endl; // we can access elements like in an array/vector
    cout << mydeque.at(1) << endl; // we can use at() to access elements too, matching index values
    
    // we can add a value to a specific index with an interator
    deque<int>::iterator dequeitr = mydeque.begin() + 1;
    mydeque.insert(dequeitr, 1500);

    // we can insert an array of values
    int arrayToDeque[5] = { 2000, 5000, 10000, 15000, 50000 };
    mydeque.insert(mydeque.end(), arrayToDeque, arrayToDeque + 5);

    cout << "Size of mydeque: " << mydeque.size() << endl;
    for (auto i: mydeque) {
      cout << i << endl;
    }
    
    mydeque.erase(mydeque.end()); // erase the last value with erase()
    mydeque.erase(mydeque.begin(), mydeque.begin()+2); // we can also erase a range of values
    
    // we can also pop values from the front and back
    mydeque.pop_front();
    mydeque.pop_back();
    
    cout << "Size of mydeque: " << mydeque.size() << endl;
    for (auto i: mydeque) {
      cout << i << endl;
    }

    // when create a new deque we can specify what value to insert and how many times
    deque<int> mynewdeque(3, 23); // three elements, all of which are 23

    // we can swap the elements between dequeues
    mydeque.swap(mynewdeque);
    
    cout << "Size of mydeque: " << mydeque.size() << endl;
    for (auto i: mydeque) {
      cout << i << endl;
    }

    // we can also delete all the values in the deque
    mynewdeque.clear();

    return 0;
}
