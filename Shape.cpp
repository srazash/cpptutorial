/*
    Files ending .cpp with an accompanying .h file are CLASS files
    These are where we IMPLEMENT the fields and methods defined in our header
   file
*/

#include "Shape.h"

// static field
int Shape::numOfShapes = 0;

// constructors
Shape::Shape(double width) {
  // we access instance fields using `this->`
  // here we set the instance fields this->height and this->width
  // to be the width argument we passed in, i.e. a square
  this->height = width;
  this->width = width;
}

Shape::Shape(double height, double width) {
  this->height = height;
  this->width = width;
}

// deconstructor
Shape::~Shape() = default; // use the default deconstructor

// methods
void Shape::SetHeight(double height) { this->height = height; }

double Shape::GetHeight() { return this->height; }

void Shape::SetWidth(double width) { this->width = width; }

double Shape::GetWidth() { return this->width; }

int Shape::GetNumOfShapes() { return numOfShapes; }

double Shape::Area() { return this->height * this->width; }
