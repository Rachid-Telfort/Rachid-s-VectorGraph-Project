#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include"Shape.h"

class Triangle:public Shape//This denotes a triangle that one candraw on a canvas. Note: only the outer perimeter of the triangle is drawn, meaning the inside of the triangle will not be filled.
{
    private:
        unsigned long long int height;

    public:
        Triangle();
        Triangle(const unsigned long long int);
        Triangle(const Point&);//This lets one determine the starting point at which to draw the triangle.
        Triangle(const unsigned long long int, const Point&);//This lets one determine the starting point at which to draw the triangle.
        Triangle(const Triangle&);
        const unsigned long long int getHeight() const;
        void changeAttributes(const unsigned long long int);
        void changeAttributes(const unsigned long long int, const Point&);////This allows one to choose the point of origin for a triangle.
};

#endif//TRIANGLE_H_INCLUDED
