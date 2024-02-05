#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

double MultBy2(double input) {
    return input * 2;
}

double DoMath(function<double(double)> func, double input) {
    return func(input);
}

double MultBy3(double input) {
    return input * 3;
}

int main(int argc, char** argv) {

    auto xtwo = MultBy2; // assign a function to a variable
    cout << "5 x 2 = " << xtwo(5) << endl; // call the function using the variable name

    // we can pass a function into a function as an argument
    cout << "10 x 2 = " << DoMath(xtwo, 10) << endl;
        
    // store functions inside of a vector
    vector<function<double(double)>> funcs(2);
    funcs[0] = MultBy2;
    funcs[1] = MultBy3;

    cout << "25 x 2 = " << funcs[0](25) << endl;
    cout << "25 x 3 = " << funcs[1](25) << endl;
    
    return 0;
}
