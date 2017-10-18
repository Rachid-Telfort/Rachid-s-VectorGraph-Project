#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include<cmath>
#include"Shape.h"

class Circle:public Shape//This class denotes a circle one can draw on a canvas. Note: only the circumference is drawn, meaning the inside of the circle is not filled.
{
    private:
        unsigned long long int radius;

    public:
        Circle();
        Circle(const unsigned long long int);
        Circle(const Point&);//This allows one to choose the point of origin for a circle.
        Circle(const unsigned long long int, const Point&);//This allows one to choose the point of origin for a circle.
        Circle(const Circle&);
        ~Circle();
        const unsigned long long int getRadius() const;
        void changeAttributes(const unsigned long long int);
        void changeAttributes(const unsigned long long int, const Point&);////This allows one to choose the point of origin for a circle.
};

#endif//CIRCLE_H_INCLUDED
