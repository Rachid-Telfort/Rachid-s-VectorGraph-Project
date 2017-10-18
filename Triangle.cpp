#include"Triangle.h"

Triangle::Triangle()
{
    this->height=4;

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            this->shapeSet.insert(Point(rowCount+5, rowCount+5));
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int baseCount=5-rowCount; baseCount<=rowCount+5; ++baseCount)
            {
                this->shapeSet.insert(Point(rowCount+5, baseCount));
            }
        }

        else
        {
            this->shapeSet.insert(Point(rowCount+5, rowCount+5));
            this->shapeSet.insert(Point(rowCount+5, 5-rowCount));
        }
    }
}

Triangle::Triangle(const Point& argument)
{
    this->height=4;

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            this->shapeSet.insert(Point(rowCount+5+argument.getX(), rowCount+5+argument.getY()));
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int baseCount=5-rowCount+argument.getY(); baseCount<=rowCount+5+argument.getY(); ++baseCount)
            {
                this->shapeSet.insert(Point(rowCount+5+argument.getX(), baseCount));
            }
        }

        else
        {
            this->shapeSet.insert(Point(rowCount+5+argument.getX(), rowCount+5+argument.getY()));
            this->shapeSet.insert(Point(rowCount+5+argument.getX(), 5-rowCount+argument.getY()));
        }
    }
}

Triangle::Triangle(const unsigned long long int firstArgument)
{
    this->height=firstArgument;

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            this->shapeSet.insert(Point(rowCount+5, rowCount+5));
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int baseCount=5-rowCount; baseCount<=rowCount+5; ++baseCount)
            {
                this->shapeSet.insert(Point(rowCount+5, baseCount));
            }
        }

        else
        {
            this->shapeSet.insert(Point(rowCount+5, rowCount+5));
            this->shapeSet.insert(Point(rowCount+5, 5-rowCount));
        }
    }
}

Triangle::Triangle(const unsigned long long int firstArgument, const Point& secondArgument)
{
    this->height=firstArgument;

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            this->shapeSet.insert(Point(rowCount+5+secondArgument.getX(), rowCount+5+secondArgument.getY()));
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int baseCount=5-rowCount+secondArgument.getY(); baseCount<=rowCount+5+secondArgument.getY(); ++baseCount)
            {
                this->shapeSet.insert(Point(rowCount+5+secondArgument.getX(), baseCount));
            }
        }

        else
        {
            this->shapeSet.insert(Point(rowCount+5+secondArgument.getX(), rowCount+5+secondArgument.getY()));
            this->shapeSet.insert(Point(rowCount+5+secondArgument.getX(), 5-rowCount+secondArgument.getY()));
        }
    }
}

Triangle::Triangle(const Triangle& argument)
{
    this->height=argument.height;
    this->shapeSet=argument.shapeSet;
}

const unsigned long long int Triangle::getHeight() const
{
    return this->height;
}

void Triangle::changeAttributes(const unsigned long long int argument)
{
    this->height=argument;
    this->shapeSet.clear();

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            this->shapeSet.insert(Point(rowCount+5, rowCount+5));
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int baseCount=5-rowCount; baseCount<=rowCount+5; ++baseCount)
            {
                this->shapeSet.insert(Point(rowCount+5, baseCount));
            }
        }

        else
        {
            this->shapeSet.insert(Point(rowCount+5, rowCount+5));
            this->shapeSet.insert(Point(rowCount+5, 5-rowCount));
        }
    }
}

void Triangle::changeAttributes(const unsigned long long int firstArgument, const Point& secondArgument)////This allows one to choose the point of origin for a triangle.
{
    this->height=firstArgument;
    this->shapeSet.clear();

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            this->shapeSet.insert(Point(rowCount+5+secondArgument.getX(), rowCount+5+secondArgument.getY()));
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int baseCount=5-rowCount+secondArgument.getY(); baseCount<=rowCount+5+secondArgument.getY(); ++baseCount)
            {
                this->shapeSet.insert(Point(rowCount+5+secondArgument.getX(), baseCount));
            }
        }

        else
        {
            this->shapeSet.insert(Point(rowCount+5+secondArgument.getX(), rowCount+5+secondArgument.getY()));
            this->shapeSet.insert(Point(rowCount+5+secondArgument.getX(), 5-rowCount+secondArgument.getY()));
        }
    }
}
