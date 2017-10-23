#include"Square.h"

Square::Square()
{
    this->side=4;

    for(unsigned long long int rowCount=0; rowCount<this->side; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->side; ++columnCount)
            {
                this->shapeSet.insert(Point(rowCount+1, columnCount+1));
            }
        }

        else if(rowCount==this->side-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->side; ++columnCount)
            {
                this->shapeSet.insert(Point(rowCount, columnCount+1));
            }
        }

        else
        {
            this->shapeSet.insert(Point(rowCount, 1));
            this->shapeSet.insert(Point(rowCount, this->side));
        }
    }
}

Square::Square(const Point& argument)
{
    this->side=4;

    for(unsigned long long int rowCount=0; rowCount<this->side; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->side; ++columnCount)
            {
                this->shapeSet.insert(Point(argument.getX()+rowCount+1, argument.getY()+columnCount+1));
            }
        }

        else if(rowCount==this->side-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->side; ++columnCount)
            {
                this->shapeSet.insert(Point(argument.getX()+rowCount, argument.getY()+columnCount+1));
            }
        }

        else
        {
            this->shapeSet.insert(Point(argument.getX()+rowCount, argument.getY()+1));
            this->shapeSet.insert(Point(argument.getX()+rowCount, argument.getY()+this->side));
        }
    }
}

Square::Square(const unsigned long long int argument)
{
    this->side=argument;

    for(unsigned long long int rowCount=0; rowCount<this->side; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->side; ++columnCount)
            {
                this->shapeSet.insert(Point(rowCount+1, columnCount+1));
            }
        }

        else if(rowCount==this->side-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->side; ++columnCount)
            {
                this->shapeSet.insert(Point(rowCount, columnCount+1));
            }
        }

        else
        {
            this->shapeSet.insert(Point(rowCount, 1));
            this->shapeSet.insert(Point(rowCount, this->side));
        }
    }
}

Square::Square(const unsigned long long int firstArgument, const Point& secondArgument)
{
    this->side=firstArgument;

    for(unsigned long long int rowCount=0; rowCount<this->side; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->side; ++columnCount)
            {
                this->shapeSet.insert(Point(secondArgument.getX()+rowCount+1, secondArgument.getY()+columnCount+1));
            }
        }

        else if(rowCount==this->side-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->side; ++columnCount)
            {
                this->shapeSet.insert(Point(secondArgument.getX()+rowCount, secondArgument.getY()+columnCount+1));
            }
        }

        else
        {
            this->shapeSet.insert(Point(secondArgument.getX()+rowCount, secondArgument.getY()+1));
            this->shapeSet.insert(Point(secondArgument.getX()+rowCount, secondArgument.getY()+this->side));
        }
    }
}

Square::Square(const Square& argument)
{
    this->side=argument.side;
    this->shapeSet=argument.shapeSet;
}

Square::~Square()
{
    this->side=0;
}

const unsigned long long int Square::getSide() const
{
    return this->side;
}

void Square::changeAttributes(const unsigned long long int argument)
{
    this->side=argument;
    this->shapeSet.clear();

    for(unsigned long long int rowCount=0; rowCount<this->side; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->side; ++columnCount)
            {
                this->shapeSet.insert(Point(rowCount+1, columnCount+1));
            }
        }

        else if(rowCount==this->side-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->side; ++columnCount)
            {
                this->shapeSet.insert(Point(rowCount, columnCount+1));
            }
        }

        else
        {
            this->shapeSet.insert(Point(rowCount, 1));
            this->shapeSet.insert(Point(rowCount, this->side));
        }
    }
}

void Square::changeAttributes(const unsigned long long int firstArgument, const Point& secondArgument)//This lets one change the starting point of the square, i.e. its first corner.
{
    this->side=firstArgument;
    this->shapeSet.clear();

    for(unsigned long long int rowCount=0; rowCount<this->side; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->side; ++columnCount)
            {
                this->shapeSet.insert(Point(secondArgument.getX()+rowCount+1, secondArgument.getY()+columnCount+1));
            }
        }

        else if(rowCount==this->side-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->side; ++columnCount)
            {
                this->shapeSet.insert(Point(secondArgument.getX()+rowCount, secondArgument.getY()+columnCount+1));
            }
        }

        else
        {
            this->shapeSet.insert(Point(secondArgument.getX()+rowCount, secondArgument.getY()+1));
            this->shapeSet.insert(Point(secondArgument.getX()+rowCount, secondArgument.getY()+this->side));
        }
    }
}
