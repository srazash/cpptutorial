#include <iostream>
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

    // when creating a new deque we can specify what value to insert and how many
    deque<int> mynewdeque(3, 23); // three elements, all of which are 23

    // we can swap the elements between dequeues
    mydeque.swap(mynewdeque);
    
    cout << "Size of mydeque: " << mydeque.size() << endl;
    for (auto i: mydeque) {
      cout << i << endl;
    }

    // we can also delete all the values in the deque
    mynewdeque.clear();

    // LISTS
    // lists are very efficient at inserting, moving and extracting elements
    // but lack direct access to the elements that arrays and vectors offer

    int numbers[5] = {1, 2, 3, 4, 5};
    list<int> mylist; // create a list
    mylist.insert(mylist.begin(), numbers, numbers + 5); // we can insert values from an array

    cout << "Size of mylist: " << mylist.size() << endl;
    for (auto i: mylist) {
      cout << i << endl;
    }

    mylist.assign({10, 11, 12}); // we can assign which will replace all existing values

    cout << "Size of mylist: " << mylist.size() << endl;
    for (auto i: mylist) {
      cout << i << endl;
    }

    // we can push values to the front or end of the list
    mylist.push_back(13);
    mylist.push_front(9);

    cout << "Size of mylist: " << mylist.size() << endl;
    for (auto i: mylist) {
      cout << i << endl;
    }

    // it's not possible to directly access the elements of a list like we can with an
    // array or vector BUT we can use an interator to access the elements
    list<int>::iterator listitr = mylist.begin(); // iterator points to the 1st element
    advance(listitr, 1); // advance by 1 element

    cout << "The 2nd item in mylist is: " << *listitr << endl; // dereference, as an inerator is a pointer

    // set the iterator back to the first element and replace it using insert()
    listitr = mylist.begin();
    mylist.insert(listitr, 1);

    cout << "Size of mylist: " << mylist.size() << endl;
    for (auto i: mylist) {
      cout << i << endl;
    }

    // we can erase a value
    mylist.erase(listitr);

    cout << "Size of mylist: " << mylist.size() << endl;
    for (auto i: mylist) {
      cout << i << endl;
    }

    // we can also erase a range of values
    listitr = mylist.begin();
    list<int>::iterator listitr2 = mylist.begin();
    advance(listitr2, 2);
    mylist.erase(listitr, listitr2);

    cout << "Size of mylist: " << mylist.size() << endl;
    for (auto i: mylist) {
      cout << i << endl;
    }

    // and we can pop the first and last values off the list
    mylist.pop_front();
    mylist.pop_back();

    cout << "Size of mylist: " << mylist.size() << endl;
    for (auto i: mylist) {
      cout << i << endl;
    }

    int numbers2[6] = {99, 98, 97, 96, 95, 95}; // duplicate value is intentional!
    list<int> mylist2;
    mylist2.insert(mylist2.begin(), numbers2, numbers2 + 6);

    // we can sort a list, or reverse a list
    mylist2.sort();
    mylist2.reverse();

    // we can remove consecutive duplicate values
    mylist2.unique();

    // we can remove a specific value
    mylist2.remove(95);
    mylist2.remove_if( // we can use remove_if() to conditionally remove values
        [](int x){ return (x % 2) != 0; }); // remove odd values

    cout << "Size of mylist2: " << mylist2.size() << endl;
    for (auto i: mylist2) {
      cout << i << endl;
    }
    
    // we can merge lists
    mylist.merge(mylist2);

    cout << "Size of mylist: " << mylist.size() << endl;
    for (auto i: mylist) {
      cout << i << endl;
    }

    return 0;
}
