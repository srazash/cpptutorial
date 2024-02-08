#include <iostream>
#include <regex>

using namespace std;

int main(int argc, char** argv) {

    // REGEX
    // regular expression allows us to define what data we want to search for in a string
    // regex allow us to use very succinct and powerful syntax to specify patterns to search for

    string sentence = "A pine tree does not grow pineapples.";

    cout << "(pine)[^ ]? : " << sentence << endl;

    regex rx ("(pine)[^ ]?"); // will match 'pine' if it ends with a space or any other character

    smatch matches; // provides many function related to searching strings

    // now we search for maches in our string (sentence) using the regex (rx) and put info about matches into matches
    if (regex_search(sentence, matches, rx)) {
        cout << matches.size() << " matches found." << endl; // print out the number of matches
    
        while (regex_search(sentence, matches, rx)) { // while matches are found
            cout << matches.str(1) // print out details of the match
                << " found at index "
                << matches.position(1)
                << endl;

            sentence = matches.suffix().str(); // then our string is updated to remove the match, for the next loop of the while
        }
    }
    
    return 0;
}
