#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main(int argc, char** argv) {

    // ASSOCIATIVE CONTAINERS
    // associative containers store sorted data that makes insertion slower but searching faster

    // SETS
    set<int> myset = {5, 4, 3, 2, 1, 1}; // sets cannot contain duplicate values

    cout << "Size of myset: " << myset.size() << endl;
    cout << "Values in myset: ";
    for (auto i: myset) {
        cout << i << ", ";
    }
    cout << "end" << endl;

    // we can insert a value
    myset.insert(9);
    myset.insert(7); // these will be sorted once inserted

    cout << "Values in myset: ";
    for (auto i: myset) {
        cout << i << ", ";
    }
    cout << "end" << endl;

    // we cannot access elements in a set directly, but we can use an iterator to do so
    set<int>::iterator setitr = myset.begin();
    setitr++; // increment the iterator
    cout << "2nd value in myset: " << *setitr << endl;

    // we can erase a value
    myset.erase(3);

    // we can erase a range of values
    setitr = myset.end();
    advance(setitr, -2); // we can advance in reverse using a negative value
    myset.erase(setitr, myset.end()); // erase the last 2 values

    cout << "Values in myset: ";
    for (auto i: myset) {
        cout << i << ", ";
    }
    cout << "end" << endl;

    int numbers[] = {10, 11, 12, 13};
    myset.insert(numbers, numbers + 4);

    auto found = myset.find(11); // we can find a value, and get an iterator pointing to it
    // if a value isn't found it will return an iterator pointing to end()
    cout << "Found " << *found << endl;

    auto ten = myset.lower_bound(9); // lower_bound works like find, but instead of returning end()
    // if it cannot find the value it returns the next available value not lower than value provided
    // here, because there is no 9 in myset, it will return an iterator pointing to 10
    cout << "Found " << *ten << endl;

    auto tenten = myset.upper_bound(6); // there is also an upper_bound() method which returns an
    // iterator point to the first element that is strictly greater than value
    cout << "Found " << *tenten << endl;

    set<int> myset2 = {98, 99};
    myset.swap(myset2); // we can swap values with another set

    cout << "Values in myset: ";
    for (auto i: myset) {
        cout << i << ", ";
    }
    cout << "end" << endl;

    // MULTI SETS
    // a multi set is identical to a regular set except it can store duplicate values

    multiset<int> mymset = {1, 2, 2, 3, 4};
    mymset.insert(4); // we can insert values including duplicates
    mymset.insert(0);

    // we can check if a set is empty
    if (!mymset.empty()) {
        cout << "SET IS NOT EMPTY! Values in mymset: ";
    for (auto i: mymset) {
        cout << i << ", ";
    }
    cout << "end" << endl;
    }

    return 0;
}
