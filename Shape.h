/*
    Files ending .h are HEADER files
    These define our class, it's FIELDS and METHODS, similar to function prototypes
*/

#ifndef SHAPE_H
#define SHAPE_H

class Shape {
    protected: // protected fields/methods are accessible within this class and any subclasses
        //fields
        double height;
        double width;

    public: // accessible everywhere
        // fields
        static int numOfShapes; // static means it's a CLASS field, not an OBJECT field

        // constructors & methods
        Shape(double width);
        Shape(double height, double width);

        virtual ~Shape(); //deconstructor

        // getters & setters
        void SetHeight(double height);
        double GetHeight();

        void SetWidth(double width);
        double GetWidth();

        static int GetNumOfShapes(); // we need a static method to access a static field

        virtual double CalculateArea(); // virtual means the method can be overrided
        // overrided methods can be different in subsclasses but share the same name
        // in this case, the area of a square and a circle are calulated differently
        // but they both have an area that requires a method to call on to return

    private: // accessible only within this class, not subclasses

};

#endif