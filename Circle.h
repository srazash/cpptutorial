/*
    Circle will be a subclass of Shape
*/

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
  Circle(double width);
  virtual ~Circle();
  double Area() override;
};

#endif
