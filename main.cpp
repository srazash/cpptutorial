#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <typeinfo>

using namespace std;

/*
 * global variables
 * (multi-line comment)
 */

int globalInt = 69; // global int
const double PI = 3.142; // global const double

int main (int argc, char** argv) {

  cout << "Hellorld!" << endl;

  bool isTrue = true; // boolean value
  char letterAyy = 'A'; // char value

  // integer values
  cout << "Min unsigned short int: " << numeric_limits<unsigned short int>::min() << endl;
  cout << "Max unsigned short int: " << numeric_limits<unsigned short int>::max() << endl;
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
  // %.3f = float with 3 decimal places, this will round up/down based on any truncated decimal places
  // %s = string
  // \n = new line
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

  int number1 = stoi(answer1); // stoi converts a string to an integer, stof does the same for floats
  int number2 = stoi(answer2);

  printf("%d + %d = %d\n", number1, number2, (number1 + number2));
  printf("%d - %d = %d\n", number1, number2, (number1 - number2));
  printf("%d * %d = %d\n", number1, number2, (number1 * number2));
  printf("%d / %d = %d\n", number1, number2, (number1 / number2));
  printf("%d %% %d = %d\n", number1, number2, (number1 % number2)); // percent sign needs to be escaped

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
  cout.setf(ios::boolalpha); // set cout to print bools as true/false instead of 1/0.
  cout << "Do we need to order stock? " << orderStock << endl;

  

  return 0;
}
