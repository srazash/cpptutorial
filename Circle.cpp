#include "Circle.h"
#include <cmath>

// constructor
Circle::Circle(double width): Shape(width) {}

// deconstructor
Circle::~Circle() = default;

// method
double Circle::CalculateArea() {
    return 3.14159 * pow((this->width / 2), 2);
}