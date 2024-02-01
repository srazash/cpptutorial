/*
    Circle will be a subclass of Shape
*/
#include "Shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape {
    protected:

    public:
        Circle(double width);
        virtual ~Circle();
        double CalculateArea();

    private:
};

#endif