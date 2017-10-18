#include"Canvas.h"

Canvas::Canvas()
{
    this->height=31;//Default height of 31.
    this->width=61;//Default width of 61.

    this->sheet=new unsigned char*[height];
    for(unsigned long long int rowCount=0; rowCount<height; ++rowCount)
    {
        this->sheet[rowCount]=new unsigned char[width];
        memset(this->sheet[rowCount], '\0', width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression width*sizeof(unsigned char) is equivalent to sizeof(this->getSheet()[rowCount]).
    }

    this->center.setX(height/2);
    this->center.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }
}

Canvas::Canvas(const unsigned long long int firstArgument, const unsigned long long int secondArgument)
{
    this->height=firstArgument;
    this->width=secondArgument;

    if(this->height%2==0)
    {
        this->height+=1;
    }

    if(this->width%2==0)
    {
        this->width+=1;
    }

    if(this->height<31)
    {
        this->height=31;
    }

    if(this->width<61)
    {
        this->width=61;
    }

    this->sheet=new unsigned char*[height];
    for(unsigned long long int rowCount=0; rowCount<height; ++rowCount)
    {
        this->sheet[rowCount]=new unsigned char[width];
        memset(this->sheet[rowCount], '\0', width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression width*sizeof(unsigned char) is equivalent to sizeof(this->getSheet()[rowCount]).
    }

    this->center.setX(height/2);
    this->center.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }
}

Canvas::Canvas(const Point& argument)
{
    this->height=31;//Default height of 31.
    this->width=61;//Default width of 61.

    this->sheet=new unsigned char*[height];
    for(unsigned long long int rowCount=0; rowCount<height; ++rowCount)
    {
        this->sheet[rowCount]=new unsigned char[width];
        memset(this->sheet[rowCount], '\0', width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression width*sizeof(unsigned char) is equivalent to sizeof(this->getSheet()[rowCount]).
    }

    this->center.setX(height/2);
    this->center.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }

    this->draw(argument);
}

Canvas::Canvas(const unsigned long long int firstArgument, const unsigned long long int secondArgument, const Point& thirdArgument)
{
    this->height=firstArgument;
    this->width=secondArgument;

    if(this->height%2==0)
    {
        this->height+=1;
    }

    if(this->width%2==0)
    {
        this->width+=1;
    }

    if(this->height<31)
    {
        this->height=31;
    }

    if(this->width<61)
    {
        this->width=61;
    }

    this->sheet=new unsigned char*[height];
    for(unsigned long long int rowCount=0; rowCount<height; ++rowCount)
    {
        this->sheet[rowCount]=new unsigned char[width];
        memset(this->sheet[rowCount], '\0', width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression width*sizeof(unsigned char) is equivalent to sizeof(this->getSheet()[rowCount]).
    }

    this->center.setX(height/2);
    this->center.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }

    this->draw(thirdArgument);
}

Canvas::Canvas(const std::set<Point>& argument)
{
    this->height=31;//Default height of 31.
    this->width=61;//Default width of 61.

    this->sheet=new unsigned char*[height];
    for(unsigned long long int rowCount=0; rowCount<height; ++rowCount)
    {
        this->sheet[rowCount]=new unsigned char[width];
        memset(this->sheet[rowCount], '\0', width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression width*sizeof(unsigned char) is equivalent to sizeof(this->getSheet()[rowCount]).
    }

    this->center.setX(height/2);
    this->center.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }

    this->draw(argument);
}

Canvas::Canvas(const unsigned long long int firstArgument, const unsigned long long int secondArgument, const std::set<Point>& thirdArgument)
{
    this->height=firstArgument;
    this->width=secondArgument;

    if(this->height%2==0)
    {
        this->height+=1;
    }

    if(this->width%2==0)
    {
        this->width+=1;
    }

    if(this->height<31)
    {
        this->height=31;
    }

    if(this->width<61)
    {
        this->width=61;
    }

    this->sheet=new unsigned char*[height];
    for(unsigned long long int rowCount=0; rowCount<height; ++rowCount)
    {
        this->sheet[rowCount]=new unsigned char[width];
        memset(this->sheet[rowCount], '\0', width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression width*sizeof(unsigned char) is equivalent to sizeof(this->getSheet()[rowCount]).
    }

    this->center.setX(height/2);
    this->center.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }

    this->draw(thirdArgument);
}

Canvas::Canvas(const Shape& argument)
{
    this->height=31;//Default height of 31.
    this->width=61;//Default width of 61.

    this->sheet=new unsigned char*[height];
    for(unsigned long long int rowCount=0; rowCount<height; ++rowCount)
    {
        this->sheet[rowCount]=new unsigned char[width];
        memset(this->sheet[rowCount], '\0', width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression width*sizeof(unsigned char) is equivalent to sizeof(this->getSheet()[rowCount]).
    }

    this->center.setX(height/2);
    this->center.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }

    this->draw(argument);
}

Canvas::Canvas(const unsigned long long int firstArgument, const unsigned long long int secondArgument, const Shape& thirdArgument)
{
    this->height=firstArgument;
    this->width=secondArgument;

    if(this->height%2==0)
    {
        this->height+=1;
    }

    if(this->width%2==0)
    {
        this->width+=1;
    }

    if(this->height<31)
    {
        this->height=31;
    }

    if(this->width<61)
    {
        this->width=61;
    }

    this->sheet=new unsigned char*[height];
    for(unsigned long long int rowCount=0; rowCount<height; ++rowCount)
    {
        this->sheet[rowCount]=new unsigned char[width];
        memset(this->sheet[rowCount], '\0', width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression width*sizeof(unsigned char) is equivalent to sizeof(this->getSheet()[rowCount]).
    }

    this->center.setX(height/2);
    this->center.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }

    this->draw(thirdArgument);
}

Canvas::~Canvas()
{
    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        delete[] this->sheet[rowCount];
        this->sheet[rowCount]=NULL;
    }

    delete[] this->sheet;
    this->sheet=NULL;

    this->height=0;
    this->width=0;
    this->center.setX(0);
    this->center.setY(0);
}

const unsigned long long int Canvas::getHeight() const
{
    return this->height;
}

const unsigned long long int Canvas::getWidth() const
{
    return this->width;
}

const Point& Canvas::getCenter() const
{
    return this->center;
}

void Canvas::draw()
{
    srand(time(NULL));
    const unsigned long long int drawPointCount=rand()%this->height*this->width;
    for(unsigned long long int pointCount=0; pointCount<drawPointCount; ++pointCount)
    {
        this->draw(Point(rand()%this->height, rand()%this->width));
    }
}

void Canvas::draw(const Point& argument)
{
    if(argument.getX()>=0&&argument.getX()<(long long int)this->height&&argument.getY()>=0&&argument.getY()<(long long int)this->width&&this->sheet[argument.getX()][argument.getY()]=='\0')
    {
        this->sheet[argument.getX()][argument.getY()]='.';
    }
}

void Canvas::draw(const std::set<Point>& argument)
{
    for(std::set<Point>::const_iterator pointIterator=argument.begin(); pointIterator!=argument.end(); ++pointIterator)
    {
        this->draw(*pointIterator);
    }
}

void Canvas::draw(const Shape& argument)
{
    this->draw(argument.getShapeSet());
}

void Canvas::show() const
{
    std::cout<<"\n"<<std::endl;

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
        {
            std::cout<<this->sheet[rowCount][columnCount];
        }

        std::cout<<std::endl;
    }
}

void Canvas::clearContents()
{
    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        memset(this->sheet[rowCount], '\0', this->width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression this->getWidth()*sizeof(char) is equivalent to sizeof(this->getSheet()[rowCount]).
    }

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }
        }

        else if(rowCount==this->height-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }
}

void Canvas::resizeSheet(const unsigned long long int firstArgument, const unsigned long long int secondArgument)
{
    if(firstArgument>31&&secondArgument>61)
    {
        std::set<Point> pointSet;

        for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                if(this->sheet[rowCount][columnCount]=='.')
                {
                    pointSet.insert(Point(rowCount, columnCount));
                }
            }

            delete[] this->sheet[rowCount];
            this->sheet[rowCount]=NULL;
        }

        delete[] this->sheet;
        this->sheet=NULL;

        this->height=firstArgument;
        this->width=secondArgument;
        this->center.setX(firstArgument/2);
        this->center.setY(secondArgument/2);

        this->sheet=new unsigned char*[height];
        for(unsigned long long int rowCount=0; rowCount<height; ++rowCount)
        {
            this->sheet[rowCount]=new unsigned char[width];
            memset(this->sheet[rowCount], '\0', width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression width*sizeof(unsigned char) is equivalent to sizeof(this->getSheet()[rowCount]).
        }

        for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
        {
            if(rowCount==0)
            {
                for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
                {
                    this->sheet[rowCount][columnCount]='_';
                }
            }

            else if(rowCount==this->height-1)
            {
                for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
                {
                    this->sheet[rowCount][columnCount]='_';
                }

                this->sheet[rowCount][0]='|';
                this->sheet[rowCount][this->width-1]='|';
            }

            else
            {
                this->sheet[rowCount][0]='|';
                this->sheet[rowCount][this->width-1]='|';
            }
        }

        this->draw(pointSet);
    }
}

unsigned char& Canvas::operator()(const unsigned long long int firstArgument, const unsigned long long int secondArgument)
{
    return this->sheet[firstArgument][secondArgument];
}

const unsigned char& Canvas::operator()(const unsigned long long int firstArgument, const unsigned long long int secondArgument) const
{
    return this->sheet[firstArgument][secondArgument];
}
