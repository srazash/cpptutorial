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
#include <deque>
#include <iterator>

using namespace std;

int main(int argc, char** argv) {

    // CONTAINERS
    // C++ has many container types in the standard library
    // vectors are one example, but there is also the
    // double ended queue:

    // deques are similar to a vector, which is a dynamic array
    // which can be resized when required, a deque can be resized
    // at both ends:
    deque<int> numbers = { 6, 9, 69, 420 };

    numbers.push_front(1); // add an element to the front of the deque
    numbers.push_back(999); // add an element to the back of the deque

    for (int n: numbers) {
        cout << n << endl;
    }

    // we can access individual elements like we do with arrays and vectors
    // but this can be a costly operation as deques are store NON-CONTIGUOUSLY
    // in memory
    cout << numbers[3] << endl;

    // INTERATORS
    // iterators are used to point to container memory locations
    vector<int> numbers2 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int>::iterator itr; // we need to declare an interator of the same type of container we are using it with

    // for loop from first element of vector, while iterator is less than the final element, incrementing the iterator
    for (itr = numbers2.begin(); itr < numbers2.end(); itr++) {
        cout << *itr << endl; // we need to dereference the interator to access the value
    }

    // we can have multiple iterators targeting the same container
    // here we will create an iterator and advance it a set number of spaces
    vector<int>::iterator itr2 = numbers2.begin();
    advance(itr2, 2); // advance by 2 spaces
    cout << *itr2 << endl;

    // next() is similar to advance() but return an iterator advanced by a given number
    auto itr3 = next(itr2, 1); // new iterator advanced by 1 from itr2
    cout << *itr3 << endl;

    auto itr4 = prev(itr2, 1); // there is also a prev() to complement next(), which performs the opposite operation
    cout << *itr4 << endl;

    // we can also define an index to insert values into using an interator
    vector<int> numbers3 = { 1, 4, 5, 6 };
    vector<int> numbers4 = { 2, 3 };

    auto itr5 = numbers3.begin(); // create a new interator to the first element of numbers3
    advance(itr5, 1); // advance the iterator to where we want to insert values

    copy(numbers4.begin(), numbers4.end(), // copy all of the numbers4 vector (from beginning to end)
        inserter(numbers3, itr5)); // insert into the numbers3 vector at the given interator index

    for (int n: numbers3) {
        cout << n << endl;
    }

    return 0;
}
