#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// there are two types of macros:
// macro constants:
#define PI 3.14159

// and macro functions:
#define AREA_CIRCLE(radius) (PI * pow(radius, 2))

int main(int argc, char **argv) {

  cout << "Area of a circle with a radius of 5: " << AREA_CIRCLE(5) << endl;

  return 0;
}
