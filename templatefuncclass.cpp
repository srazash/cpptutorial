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

using namespace std;

// template functions & classes
// template functions operate similar to generics in other languages
template <typename T>
void Xtwo(T val) {
    cout << val << " x 2 = " << (val * 2) << endl;
}

template <typename T>
T Add(T v1, T v2) {
    return v1 + v2;
}

template <typename T>
T Max(T v1, T v2) {
    return (v1 > v2) ? v1 : v2;
}

// template classes, like template functions, can work with multiple data types
template <typename T, typename U>
class Person {
    public:
    T height;
    U weight;
    static int personCount;

    Person(T h, U w) {
        this->height = h;
        this->weight = w;
        personCount++;
    }

    void GetPersonData() {
        cout << "Height: " << this->height << ", Weight: " << this->weight << endl;
    }
};

template<typename T, typename U> int Person<T, U>::personCount; // initialise personCount

int main(int argc, char** argv) {
    // Xtwo(), Add() and Max() can accept ints or floats
    Xtwo(5);
    Xtwo(10.5);

    cout << "5 + 4 = " << Add(5, 4) << endl;
    cout << "5.5 + 4.4 = " << Add(5.5, 4.4) << endl;

    cout << "Max: 10 or 100 = " << Max(10, 100) << endl;
    cout << "Max: 69.420 or 420.69 = " << Max(69.420, 420.69) << endl;
    
    // Max() can also accept strings and chars
    cout << "Max: 'A' or 'B' = " << Max('A', 'B') << endl;
    cout << "Max: Dog or Cat = " << Max("Dog", "Cat") << endl;

    Person<double, int> mikeTyson(5.83, 216);

    mikeTyson.GetPersonData();

    cout << "Count of people: " << mikeTyson.personCount << endl;

    return 0;
}
