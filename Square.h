#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

#include"Shape.h"

class Square:public Shape//This denotes a square that one can draw on a canvas. Note: the inside of the square will not be filled, only the perimeter is drawn.
{
    private:
        unsigned long long int height;
        unsigned long long int width;

    public:
        Square();
        Square(const Point&);//This lets one choose the starting point of the square, i.e. its first corner.
        Square(const unsigned long long int, const unsigned long long int);
        Square(const unsigned long long int, const unsigned long long int, const Point&);//This lets one choose the starting point of the square, i.e. its first corner.
        Square(const Square&);
        ~Square();
        const unsigned long long int getHeight() const;
        const unsigned long long int getWidth() const;
        void changeAttributes(const unsigned long long int, const unsigned long long int);
        void changeAttributes(const unsigned long long int, const unsigned long long int, const Point&);//This lets one change the starting point of the square, i.e. its first corner.
};

#endif//SQUARE_H_INCLUDED
