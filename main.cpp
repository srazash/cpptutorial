#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <numeric>
#include <sstream>
#include <string>
#include <typeinfo>
#include <vector>

using namespace std;

/*
 * global variables
 * (multi-line comment)
 */

int globalInt = 69;      // global int
const double PI = 3.142; // global const double

int main(int argc, char **argv) {

  cout << "Hellorld!" << endl;

  bool isTrue = true;   // boolean value
  char letterAyy = 'A'; // char value

  // integer values
  cout << "Min unsigned short int: "
       << numeric_limits<unsigned short int>::min() << endl;
  cout << "Max unsigned short int: "
       << numeric_limits<unsigned short int>::max() << endl;
  cout << "Min short int: " << numeric_limits<short int>::min() << endl;
  cout << "Max short int: " << numeric_limits<short int>::max() << endl;
  cout << "Min int: " << numeric_limits<int>::min() << endl;
  cout << "Max int: " << numeric_limits<int>::max() << endl;
  cout << "Min long: " << numeric_limits<long>::min() << endl;
  cout << "Max long: " << numeric_limits<long>::max() << endl;

  // floarting point values
  cout << "Min float: " << numeric_limits<float>::min() << endl;
  cout << "Max float: " << numeric_limits<float>::max() << endl;
  cout << "Min double: " << numeric_limits<double>::min() << endl;
  cout << "Max double: " << numeric_limits<double>::max() << endl;
  cout << "Min long double: " << numeric_limits<long double>::min() << endl;
  cout << "Max long double: " << numeric_limits<long double>::max() << endl;

  // limits of floats
  // the basic "float" data type is only accurate up to 6 decimal places

  float f1 = 1.1111111;
  float f2 = 2.2222222;

  printf("Sum = %.7f\n", (f1 + f2)); // 3.3333330

  // "doubles" have an accuracy up to 15 decimal places

  double d1 = 1.1111111111111111;
  double d2 = 2.2222222222222222;

  printf("Sum = %.16f\n", (d1 + d2)); // 3.3333333333333335

  // the "auto" keyword can be used to let the compiler infer the data type

  auto myValue = 420; // int

  cout << "myValue is an " << typeid(myValue).name() << endl; // i = int

  // printf data types
  // %c = char
  // %d = int
  // %5d = int with 5 characher left pad
  // %.3f = float with 3 decimal places, this will round up/down based on any
  // truncated decimal places %s = string \n = new line
  printf("%c %d %5d %.3f %s\n", 'X', 420, 69, 1.100999, "ayooo!");

  // strings

  string question = "Give me a number: ";
  string answer1, answer2; // declare without assigning a value

  cout << question;
  cin >> answer1;

  cout << endl; // create a new line without printing anything to the screen

  cout << "Give me another number: ";
  cin >> answer2;

  cout << endl;

  int number1 = stoi(answer1); // stoi converts a string to an integer, stof
                               // does the same for floats
  int number2 = stoi(answer2);

  printf("%d + %d = %d\n", number1, number2, (number1 + number2));
  printf("%d - %d = %d\n", number1, number2, (number1 - number2));
  printf("%d * %d = %d\n", number1, number2, (number1 * number2));
  printf("%d / %d = %d\n", number1, number2, (number1 / number2));
  printf("%d %% %d = %d\n", number1, number2,
         (number1 % number2)); // percent sign needs to be escaped

  // conditional operators: > < >= <= == !=
  // logical operators: && || !

  string userAge;
  cout << "How old are you? ";
  cin >> userAge;

  int userAgeI = stoi(userAge);

  if ((userAgeI > 0) && (userAgeI < 18)) {
    cout << "You cannot vote or drive." << endl;
  } else if (userAgeI == 18) {
    cout << "You can now vote and drive." << endl;
  } else if ((userAgeI == 21) || (userAgeI == 65)) {
    cout << "Happy 21st or retirement!" << endl;
  } else {
    cout << "Carry on as you are." << endl;
  }

  // ternary operator

  int stockLevel = 38;
  bool orderStock = (stockLevel < 50) ? true : false; // true

  cout << "Do we need to order stock? " << orderStock << endl;
  cout.setf(
      ios::boolalpha); // set cout to print bools as true/false instead of 1/0.
  cout << "Do we need to order stock? " << orderStock << endl;

  // arrays

  int arrNumbers1[10] = {1}; // arrays with 10 elements, element 0 = 10
  int arrNumbers2[] = {1, 2,
                       3}; // array size is inferred from the initial values

  int arrNumbers3[5] = {8, 9};
  cout << "1st value: " << arrNumbers3[0] << endl;
  arrNumbers3[0] = 7;
  cout << "1st value: " << arrNumbers3[0] << endl;

  int arrNumbers4[2][2][2] = {
      {{1, 2}, {3, 4}},
      {{5, 6}, {7, 8}}}; // multidimentional arrays, here we have a 3d array -
                         // [layers][columns][rows]
  cout << arrNumbers4[0][1][1]
       << endl; // first layer, second column, second row (4)

  // vectors

  vector<int> vecNumbers1(2); // vector of ints with an initial size of 2
  vecNumbers1[0] = 1;         // access elements the same way as an array
  vecNumbers1[1] = 2;
  vecNumbers1.push_back(
      3); // resize the vector using push_back(), size is now 3

  cout << "Vector size: " << vecNumbers1.size() << endl;

  // looping

  // while loop
  int idx = 1;
  while (idx <= 20) {
    if ((idx % 2) == 0) {
      idx += 1;
      continue;
    }
    if (idx == 15)
      break;
    cout << "idx: " << idx << endl;
    idx += 1;
  }

  // ranging over a stringstream
  vector<string> words;
  stringstream sstream("the quick brown fox jumps over the lazy dog");
  string word;
  while (getline(sstream, word, ' ')) {
    words.push_back(word);
  }

  // for loop, looping over elements of words vector
  for (int idx = 0; idx < words.size(); ++idx) {
    cout << words[idx] << endl;
  }

  // abbreviated for loop
  int arrNumbers5[] = {1, 2, 3, 4, 5};
  for (auto e : arrNumbers5)
    cout << e << endl;

  // do-while loop
  srand(time(NULL));
  int secretNumber = rand() % 11;
  int guess = 0;

  do {
    cout << "Guess a number: ";
    cin >> guess;
    if (guess > secretNumber)
      cout << "Too big!\n";
    if (guess < secretNumber)
      cout << "Too small!\n";
  } while (secretNumber != guess);

  cout << "You guessed it!" << endl;

  // strings

  string s1 = "I'm a string!";
  cout << "1st letter of string: " << s1[0] << endl; // strings can be accessed like an array
  cout << "Last letter of string: " << s1.back() << endl; // access the last character with the back() function
  cout << "Length of string: " << s1.length() << endl; // access the length of the string

  string s2 = s1; // copy a string
  string s3(s2, 6); // copy a string from a specific character
  string s4 = s1 + "!!"; // concatinate a string
  s4.append("!!"); // append a string

  s4.erase(12, s4.length() - 1); // erase string from element 12 to the end
  cout << "s4: " << s4 << endl;

  if (s4.find("string") != string::npos)
    cout << "s4 index: " << s4.find("string") << endl; // find a string and return it's index within a string

  cout << "Substring: " << s4.substr(6, 6) << endl;
  string sn = to_string(1 + 2);
  cout << "Number converted to a string: " << sn << endl;

  // character functions

  char letterZ = 'Z';
  char num9 = '9';
  char space = ' ';
  cout << "Is letterZ a letter or a number: " << isalnum(letterZ) << endl; // check if a char is a letter or number
  cout << "Is letterZ a letter: " << isalpha(letterZ) << endl; // check if a char is a letter
  cout << "Is num9 a letter: " << isdigit(num9) << endl; // check if a char is a number
  cout << "Is space a space: " << isspace(space) << endl; // check if a char is a letter

  return 0;
}
