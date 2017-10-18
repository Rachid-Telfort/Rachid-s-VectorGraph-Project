#include"Point.h"

Point::Point()
{
    this->x=0;
    this->y=0;
}

Point::Point(const long long int x, const long long int y)
{
    this->x=x;
    this->y=y;
}

Point::Point(const Point& argument)
{
    this->x=argument.x;
    this->y=argument.y;
}

Point::~Point()
{
    this->x=0;
    this->y=0;
}

void Point::setX(const long long int x)
{
    this->x=x;
}

const long long int Point::getX() const
{
    return this->x;
}

void Point::setY(const long long int y)
{
    this->y=y;
}

const long long int Point::getY() const
{
    return this->y;
}

const bool Point::operator<(const Point& secondArgument) const
{
    return this->x<secondArgument.x||this->y<secondArgument.y;
}
