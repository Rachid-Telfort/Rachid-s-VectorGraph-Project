#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include<cstring>
#include<iostream>
#include<set>
#include<stdexcept>
#include"Function.h"
#include"Point.h"

class Graph//This class denotes a 2D graph of the x-y plane like in algebra. One can draw various functions that they themselves implement, the built-in functions, or a custom set of points.
{
    private:
        unsigned long long int height;
        unsigned long long int width;
        unsigned char** sheet;
        Point origin;

    public:
        Graph();
        Graph(const unsigned long long int, const unsigned long long int);
        Graph(const Point&);
        Graph(const unsigned long long int, const unsigned long long int, const Point&);
        Graph(const std::set<Point>&);
        Graph(const unsigned long long int, const unsigned long long int, const std::set<Point>&);
        Graph(const Function&);
        Graph(const unsigned long long int, const unsigned long long int, const Function&);
        ~Graph();
        const unsigned long long int getHeight() const;
        const unsigned long long int getWidth() const;
        const Point& getOrigin() const;
        void draw();//Makes random graph.
        void draw(const Point&);
        void draw(const std::set<Point>&);
        void draw(const Function&);
        void show() const;
        void clearContents();
        void resizeSheet(const unsigned long long int, const unsigned long long int);
        unsigned char& operator()(const unsigned long long int, const unsigned long long int);
        const unsigned char& operator()(const unsigned long long int, const unsigned long long int) const;
};

#endif//GRAPH_H_INCLUDED
