#include"Square.h"

Square::Square()
{
    this->height=4;
    this->width=4;

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->shapeSet.insert(Point(rowCount+1, columnCount+1));
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->shapeSet.insert(Point(rowCount, columnCount+1));
            }
        }

        else
        {
            this->shapeSet.insert(Point(rowCount, 1));
            this->shapeSet.insert(Point(rowCount, this->width));
        }
    }
}

Square::Square(const Point& argument)
{
    this->height=4;
    this->width=4;

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->shapeSet.insert(Point(argument.getX()+rowCount+1, argument.getY()+columnCount+1));
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->shapeSet.insert(Point(argument.getX()+rowCount, argument.getY()+columnCount+1));
            }
        }

        else
        {
            this->shapeSet.insert(Point(argument.getX()+rowCount, argument.getY()+1));
            this->shapeSet.insert(Point(argument.getX()+rowCount, argument.getY()+this->width));
        }
    }
}

Square::Square(const unsigned long long int firstArgument, const unsigned long long int secondArgument)
{
    this->height=firstArgument;
    this->width=secondArgument;

    if(firstArgument!=secondArgument)
    {
        this->width=firstArgument;
    }

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->shapeSet.insert(Point(rowCount+1, columnCount+1));
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->shapeSet.insert(Point(rowCount, columnCount+1));
            }
        }

        else
        {
            this->shapeSet.insert(Point(rowCount, 1));
            this->shapeSet.insert(Point(rowCount, this->width));
        }
    }
}

Square::Square(const unsigned long long int firstArgument, const unsigned long long secondArgument, const Point& thirdArgument)
{
    this->height=firstArgument;
    this->width=secondArgument;

    if(firstArgument!=secondArgument)
    {
        this->width=firstArgument;
    }

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->shapeSet.insert(Point(thirdArgument.getX()+rowCount+1, thirdArgument.getY()+columnCount+1));
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->shapeSet.insert(Point(thirdArgument.getX()+rowCount, thirdArgument.getY()+columnCount+1));
            }
        }

        else
        {
            this->shapeSet.insert(Point(thirdArgument.getX()+rowCount, thirdArgument.getY()+1));
            this->shapeSet.insert(Point(thirdArgument.getX()+rowCount, thirdArgument.getY()+this->width));
        }
    }
}

Square::Square(const Square& argument)
{
    this->height=argument.height;
    this->width=argument.width;
    this->shapeSet=argument.shapeSet;
}

Square::~Square()
{
    this->height=0;
    this->width=0;
}

const unsigned long long int Square::getHeight() const
{
    return this->height;
}

const unsigned long long int Square::getWidth() const
{
    return this->width;
}

void Square::changeAttributes(const unsigned long long int firstArgument, const unsigned long long int secondArgument)
{
    this->height=firstArgument;
    this->width=secondArgument;
    this->shapeSet.clear();

    if(firstArgument!=secondArgument)
    {
        this->width=firstArgument;
    }

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->shapeSet.insert(Point(rowCount+1, columnCount+1));
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->shapeSet.insert(Point(rowCount, columnCount+1));
            }
        }

        else
        {
            this->shapeSet.insert(Point(rowCount, 1));
            this->shapeSet.insert(Point(rowCount, this->width));
        }
    }
}

void Square::changeAttributes(const unsigned long long int firstArgument, const unsigned long long int secondArgument, const Point& thirdArgument)//This lets one change the starting point of the square, i.e. its first corner.
{
    this->height=firstArgument;
    this->width=secondArgument;
    this->shapeSet.clear();

    if(firstArgument!=secondArgument)
    {
        this->width=firstArgument;
    }

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->shapeSet.insert(Point(thirdArgument.getX()+rowCount+1, thirdArgument.getY()+columnCount+1));
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->shapeSet.insert(Point(thirdArgument.getX()+rowCount, thirdArgument.getY()+columnCount+1));
            }
        }

        else
        {
            this->shapeSet.insert(Point(thirdArgument.getX()+rowCount, thirdArgument.getY()+1));
            this->shapeSet.insert(Point(thirdArgument.getX()+rowCount, thirdArgument.getY()+this->width));
        }
    }
}
