#include"Shape.h"

Shape::Shape(const std::set<Point>& argument)
{
    this->shapeSet=argument;
}

Shape::Shape(const Shape& argument)
{
    this->shapeSet=argument.shapeSet;
}

Shape::~Shape()
{
    this->shapeSet.clear();
}

void Shape::changeForm(const std::set<Point>& argument)
{
    this->shapeSet=argument;
}

void Shape::changeForm(const Shape& argument)
{
    this->shapeSet=argument.shapeSet;
}

const std::set<Point>& Shape::getShapeSet() const
{
    return this->shapeSet;
}

void Shape::clearShapeSet()
{
    this->shapeSet.clear();
}
