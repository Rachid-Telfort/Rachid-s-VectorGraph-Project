#include"Circle.h"

Circle::Circle()
{
    this->radius=4;

    for(unsigned long long int degreeCount=0; degreeCount<360; ++degreeCount)
    {
        this->shapeSet.insert(Point(this->radius*sin(degreeCount*3.14159265359/180)+5, this->radius*cos(degreeCount*3.14159265359/180)+5));
    }
}

Circle::Circle(const Point& argument)
{
    this->radius=4;

    for(unsigned long long int degreeCount=0; degreeCount<360; ++degreeCount)
    {
        this->shapeSet.insert(Point(this->getRadius()*sin(degreeCount*3.14159265359/180)+5+argument.getX(), this->getRadius()*cos(degreeCount*3.14159265359/180)+5+argument.getY()));
    }
}

Circle::Circle(const unsigned long long int argument)
{
    this->radius=argument;

    for(unsigned long long int degreeCount=0; degreeCount<360; ++degreeCount)
    {
        this->shapeSet.insert(Point(this->radius*sin(degreeCount*3.14159265359/180)+5, this->radius*cos(degreeCount*3.14159265359/180)+5));
    }
}

Circle::Circle(const unsigned long long int firstArgument, const Point& secondArgument)
{
    this->radius=firstArgument;

    for(unsigned long long int degreeCount=0; degreeCount<360; ++degreeCount)
    {
        this->shapeSet.insert(Point(this->radius*sin(degreeCount*3.14159265359/180)+5+secondArgument.getX(), this->radius*cos(degreeCount*3.14159265359/180)+5+secondArgument.getY()));
    }
}

Circle::Circle(const Circle& argument)
{
    this->radius=argument.radius;
    this->shapeSet=argument.shapeSet;
}

Circle::~Circle()
{
    this->radius=0;
}

const unsigned long long int Circle::getRadius() const
{
    return this->radius;
}

void Circle::changeAttributes(const unsigned long long int firstArgument)
{
    this->radius=firstArgument;
    this->shapeSet.clear();

    for(unsigned long long int degreeCount=0; degreeCount<360; ++degreeCount)
    {
        this->shapeSet.insert(Point(this->radius*sin(degreeCount*3.14159265359/180)+5, this->radius*cos(degreeCount*3.14159265359/180)+5));
    }
}

void Circle::changeAttributes(const unsigned long long int firstArgument, const Point& secondArgument)////This allows one to choose the point of origin for a circle.
{
    this->radius=firstArgument;
    this->shapeSet.clear();

    for(unsigned long long int degreeCount=0; degreeCount<360; ++degreeCount)
    {
        this->shapeSet.insert(Point(this->radius*sin(degreeCount*3.14159265359/180)+5+secondArgument.getX(), this->radius*cos(degreeCount*3.14159265359/180)+5+secondArgument.getY()));
    }
}
