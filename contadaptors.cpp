#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(int argc, char** argv) {

    // CONTAINER ADAPTORS
    // containers provide various interafaces for accessing data, such as FIFO and FILO

    // STACKS
    // stacks are FILO containers - first in, last out
    // think fo it like a stack of dishes, the ones you stack first are at the bottom
    // so you would take off the top plat first
    stack<string> names;
    names.push("Ryan");
    names.push("Ben");
    names.push("Will");    

    // we can check the size of our stack
    cout << "Size of names: " << names.size() << endl;

    // we can also check if our stack is empty with empty()
    int size = names.size(); // DO NOT EVALUATE .SIZE() IN THE FOR LOOP! IT CHANGES BETWEEN EVALUATIONS!
    int empty = names.empty();
    if (!empty) { // if names is not empty
        for (int i = 0; i < size; i++) {
            cout << names.top() << endl; // print out the name at the top() of the stack (last in)
            names.pop(); // remove it
        }
    }

    // QUEUES
    // queues are similar to stacks but are FIFO - first in, first out
    // think of a queue for a bus, the first person in the queue will be the first
    // to get out of the queue (and onto the bus)
    queue<string> animals;

    // again we push() onto a queue
    animals.push("Dog");
    animals.push("Cat");
    animals.push("Parrot");
   
    cout << "Size of animals: " << animals.size() << endl; 
    
    // we can get the size and check if the queue is empty
    size = animals.size();
    empty = animals.empty();

    if (!empty) {
        for (int i = 0; i < size; i++) {
            cout << animals.front() << endl; // we can get the value at the front() of the queue (first in)
            animals.pop(); // and pop() them off
        }
    }

    // PRIORITY QUEUE
    // a priority queue works like a regular queue except that we can assign a priority to our values
    // so no matter what order we add items to the queue, any items with a higher priority will pop off first
    priority_queue<int> numbers;
    numbers.push(4); // we push values onto the priority_queue
    numbers.push(8);
    numbers.push(5);

    cout << "Size of numbers: " << numbers.size() << endl; // we can check the size

    // check if our priority_queue is empty
    size = numbers.size();
    empty = numbers.empty();
    if (!empty) {
        for (int i = 0; i < size; i++) {
            cout << numbers.top() << endl; // we access the top() value in a priority queue
            numbers.pop(); // and we pop() them off the queue
        }
    }
    
    return 0;
}
