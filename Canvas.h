#ifndef CANVAS_H_INCLUDED
#define CANVAS_H_INCLUDED

#include<cstdlib>
#include<cstring>
#include<ctime>
#include<iostream>
#include"Shape.h"

class Canvas//This denotes a canvas that one can use to draw various shapes that either the user implements or the built-in shapes.
{
    private:
        unsigned long long int height;
        unsigned long long int width;
        unsigned char** sheet;
        Point center;

    public:
        Canvas();
        Canvas(const unsigned long long int, const unsigned long long int);
        Canvas(const Point&);
        Canvas(const unsigned long long int, const unsigned long long int, const Point&);
        Canvas(const std::set<Point>&);
        Canvas(const unsigned long long int, const unsigned long long int, const std::set<Point>&);
        Canvas(const Shape&);
        Canvas(const unsigned long long int, const unsigned long long int, const Shape&);
        ~Canvas();
        const unsigned long long int getHeight() const;
        const unsigned long long int getWidth() const;
        const Point& getCenter() const;
        void draw();//Makes random drawing on canvas.
        void draw(const Point&);
        void draw(const std::set<Point>&);
        void draw(const Shape&);
        void show() const;
        void clearContents();//Clears all contents of canvas.
        void resizeSheet(const unsigned long long int, const unsigned long long int);
        unsigned char& operator()(const unsigned long long int, const unsigned long long int);
        const unsigned char& operator()(const unsigned long long int, const unsigned long long int) const;
};

#endif//CANVAS_H_INCLUDED
