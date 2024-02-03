#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iterator>
#include <limits>
#include <numeric>
#include <sstream>
#include <string>
#include <typeinfo>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> GenerateRandVec(int numbOfValues, int min, int max);

int main(int argc, char **argv) {
  // Lambda Expressions
  // allows us to perform list operations in a single line of code
  vector<int> vecVals = GenerateRandVec(10, 1, 50);

  sort(vecVals.begin(), vecVals.end(), [](int x, int y) { return x < y; });

  for (auto val : vecVals)
    cout << "sorted vec: " << val << endl;

  vector<int> vecVals2 = GenerateRandVec(10, 1, 50);
  vector<int> evenVecVals;

  copy_if(vecVals2.begin(), vecVals2.end(), back_inserter(evenVecVals), [](int x) { return (x % 2) == 0; });

  for (auto val : evenVecVals)
    cout << "even vec: " << val << endl;

  return 0;
}

vector<int> GenerateRandVec(int numbOfValues, int min, int max) {
  vector<int> vecValues;

  srand(time(NULL));

  int idx = 0, randVal = 0;

  while (idx < numbOfValues) {
    randVal = min + rand() % ((max + 1) - min);
    vecValues.push_back(randVal);
    idx++;
  }

  return vecValues;
}