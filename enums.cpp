#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    // ENUMS
    // enums or enumerated types are a custom data type allow us to assign names to contant ints

    // here we creat an enum doe days of the week
    enum days {
        Mon = 1, // we assign Mon as 1, otherwise it would start at 0
        Tue, // all the other days recieve an incremented int automatically
        Wed,
        Thu,
        Fri,
        Sat,
        Sun
    };

    days today = Tue; // create a variable called today, of type days (our enum) and assign it Tue

    // we can use the enum as part of an evaluation
    cout << "Today is the ";
    if (today == Mon) {
        cout << today << "st day of the week." << endl; // we can access the int value of each enum item
    } else if (today == Tue) {
        cout << today << "nd day of the week." << endl; // becase our variable was set to Tue, we pull the value 2 from the enum
    } else if (today == Wed) {
        cout << today << "rd day of the week." << endl;
    } else {
        cout << today << "th day of the week." << endl;
    }

    // we can cycle through each item in our enum using a for loop
    for (int i = Mon; i <= Sun; i++) {
        cout << i << endl;
    }
    
    return 0;
}
