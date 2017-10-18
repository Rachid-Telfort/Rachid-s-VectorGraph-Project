#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#include<set>
#include"Point.h"

class Shape//This class denotes a generic shape that one can draw on a canvas. However, one must supply the points to draw the shape.
{
    protected:
        std::set<Point> shapeSet;

    public:
        Shape(){};
        Shape(const std::set<Point>&);
        Shape(const Shape&);
        virtual ~Shape();
        void changeForm(const std::set<Point>&);
        void changeForm(const Shape&);
        const std::set<Point>& getShapeSet() const;
        void clearShapeSet();
};

#endif//SHAPE_H_INCLUDED
