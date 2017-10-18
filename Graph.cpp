#include"Graph.h"

Graph::Graph()
{
    this->height=31;//Default height of 31.
    this->width=61;//Default width of 61.

    this->sheet=new unsigned char*[height];
    for(unsigned long long int rowCount=0; rowCount<height; ++rowCount)
    {
        this->sheet[rowCount]=new unsigned char[width];
        memset(this->sheet[rowCount], '\0', width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression width*sizeof(unsigned char) is equivalent to sizeof(this->getSheet()[rowCount]).
    }

    this->origin.setX(height/2);
    this->origin.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='_';
            this->sheet[rowCount][this->width/2]='_';
            this->sheet[rowCount][this->width-1]='_';
        }

        else if(rowCount==(this->height-1)/2)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else if(rowCount==this->getHeight()-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }
}

Graph::Graph(const unsigned long long int firstArgument, const unsigned long long int secondArgument)
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

    this->origin.setX(height/2);
    this->origin.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='_';
            this->sheet[rowCount][this->width/2]='_';
            this->sheet[rowCount][this->width-1]='_';
        }

        else if(rowCount==(this->height-1)/2)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else if(rowCount==this->getHeight()-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }
}

Graph::Graph(const Point& argument)
{
    this->height=31;//Default height of 31.
    this->width=61;//Default width of 61.

    this->sheet=new unsigned char*[height];
    for(unsigned long long int rowCount=0; rowCount<height; ++rowCount)
    {
        this->sheet[rowCount]=new unsigned char[width];
        memset(this->sheet[rowCount], '\0', width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression width*sizeof(unsigned char) is equivalent to sizeof(this->getSheet()[rowCount]).
    }

    this->origin.setX(height/2);
    this->origin.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='_';
            this->sheet[rowCount][this->width/2]='_';
            this->sheet[rowCount][this->width-1]='_';
        }

        else if(rowCount==(this->height-1)/2)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else if(rowCount==this->getHeight()-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }

    this->draw(argument);
}

Graph::Graph(const unsigned long long int firstArgument, const unsigned long long int secondArgument, const Point& thirdArgument)
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

    this->origin.setX(height/2);
    this->origin.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='_';
            this->sheet[rowCount][this->width/2]='_';
            this->sheet[rowCount][this->width-1]='_';
        }

        else if(rowCount==(this->height-1)/2)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else if(rowCount==this->getHeight()-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }

    this->draw(thirdArgument);
}

Graph::Graph(const std::set<Point>& argument)
{
    this->height=31;//Default height of 31.
    this->width=61;//Default width of 61.

    this->sheet=new unsigned char*[height];
    for(unsigned long long int rowCount=0; rowCount<height; ++rowCount)
    {
        this->sheet[rowCount]=new unsigned char[width];
        memset(this->sheet[rowCount], '\0', width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression width*sizeof(unsigned char) is equivalent to sizeof(this->getSheet()[rowCount]).
    }

    this->origin.setX(height/2);
    this->origin.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='_';
            this->sheet[rowCount][this->width/2]='_';
            this->sheet[rowCount][this->width-1]='_';
        }

        else if(rowCount==(this->height-1)/2)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else if(rowCount==this->getHeight()-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }

    this->draw(argument);
}

Graph::Graph(const unsigned long long int firstArgument, const unsigned long long int secondArgument, const std::set<Point>& thirdArgument)
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

    this->origin.setX(height/2);
    this->origin.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='_';
            this->sheet[rowCount][this->width/2]='_';
            this->sheet[rowCount][this->width-1]='_';
        }

        else if(rowCount==(this->height-1)/2)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else if(rowCount==this->getHeight()-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }

    this->draw(thirdArgument);
}

Graph::Graph(const Function& argument)
{
    this->height=31;//Default height of 31.
    this->width=61;//Default width of 61.

    this->sheet=new unsigned char*[height];
    for(unsigned long long int rowCount=0; rowCount<height; ++rowCount)
    {
        this->sheet[rowCount]=new unsigned char[width];
        memset(this->sheet[rowCount], '\0', width*sizeof(unsigned char));//This sets all the characters in the graph to the null character constant. The expression width*sizeof(unsigned char) is equivalent to sizeof(this->getSheet()[rowCount]).
    }

    this->origin.setX(height/2);
    this->origin.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='_';
            this->sheet[rowCount][this->width/2]='_';
            this->sheet[rowCount][this->width-1]='_';
        }

        else if(rowCount==(this->height-1)/2)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else if(rowCount==this->getHeight()-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }

    this->draw(argument);
}

Graph::Graph(const unsigned long long int firstArgument, const unsigned long long int secondArgument, const Function& thirdArgument)
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

    this->origin.setX(height/2);
    this->origin.setY(width/2);

    for(unsigned long long int rowCount=0; rowCount<this->height; ++rowCount)
    {
        if(rowCount==0)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='_';
            this->sheet[rowCount][this->width/2]='_';
            this->sheet[rowCount][this->width-1]='_';
        }

        else if(rowCount==(this->height-1)/2)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else if(rowCount==this->getHeight()-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }

    this->draw(thirdArgument);
}

Graph::~Graph()
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
    this->origin.setX(0);
    this->origin.setY(0);
}

const unsigned long long int Graph::getHeight() const
{
    return this->height;
}

const unsigned long long int Graph::getWidth() const
{
    return this->width;
}

const Point& Graph::getOrigin() const
{
    return this->origin;
}

void Graph::draw()
{
    srand(time(NULL));
    const unsigned long long int drawPointCount=rand()%this->height*this->width;
    for(unsigned long long int pointCount=0; pointCount<drawPointCount; ++pointCount)
    {
        this->draw(Point(rand()%this->height, rand()%this->width));
    }
}

void Graph::draw(const Point& argument)
{
    if(argument.getX()>=0&&argument.getX()<(long long int)this->height&&argument.getY()>=0&&argument.getY()<(long long int)this->width&&this->sheet[argument.getX()][argument.getY()]=='\0')
    {
        this->sheet[argument.getX()][argument.getY()]='.';
    }
}

void Graph::draw(const std::set<Point>& argument)
{
    for(std::set<Point>::const_iterator pointIterator=argument.begin(); pointIterator!=argument.end(); ++pointIterator)
    {
        this->draw(*pointIterator);
    }
}

void Graph::draw(const Function& argument)
{
    for(long long int functionPoint=0; functionPoint<(long long int)this->width; ++functionPoint)
    {
        this->draw(Point(this->getOrigin().getX()-argument(functionPoint), this->getOrigin().getY()+functionPoint));
        this->draw(Point(this->getOrigin().getX()-argument(-functionPoint), this->getOrigin().getY()-functionPoint));
    }
}

void Graph::show() const
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

void Graph::clearContents()
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

            this->sheet[rowCount][0]='_';
            this->sheet[rowCount][this->width/2]='_';
            this->sheet[rowCount][this->width-1]='_';
        }

        else if(rowCount==(this->height-1)/2)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else if(rowCount==this->getHeight()-1)
        {
            for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
            {
                this->sheet[rowCount][columnCount]='_';
            }

            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }

        else
        {
            this->sheet[rowCount][0]='|';
            this->sheet[rowCount][this->width/2]='|';
            this->sheet[rowCount][this->width-1]='|';
        }
    }
}

void Graph::resizeSheet(const unsigned long long int firstArgument, const unsigned long long int secondArgument)
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
        this->origin.setX(firstArgument/2);
        this->origin.setY(secondArgument/2);

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

                this->sheet[rowCount][0]='_';
                this->sheet[rowCount][this->width/2]='_';
                this->sheet[rowCount][this->width-1]='_';
            }

            else if(rowCount==(this->height-1)/2)
            {
                for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
                {
                    this->sheet[rowCount][columnCount]='_';
                }

                this->sheet[rowCount][0]='|';
                this->sheet[rowCount][this->width/2]='|';
                this->sheet[rowCount][this->width-1]='|';
            }

            else if(rowCount==this->getHeight()-1)
            {
                for(unsigned long long int columnCount=0; columnCount<this->width; ++columnCount)
                {
                    this->sheet[rowCount][columnCount]='_';
                }

                this->sheet[rowCount][0]='|';
                this->sheet[rowCount][this->width/2]='|';
                this->sheet[rowCount][this->width-1]='|';
            }

            else
            {
                this->sheet[rowCount][0]='|';
                this->sheet[rowCount][this->width/2]='|';
                this->sheet[rowCount][this->width-1]='|';
            }
        }

        this->draw(pointSet);
    }
}

unsigned char& Graph::operator()(const unsigned long long int firstArgument, const unsigned long long int secondArgument)
{
    if(firstArgument>=this->height)
    {
        throw std::out_of_range("Error: x-coordinate argument index out of bounds.");
    }

    else if(secondArgument>=this->width)
    {
         throw std::out_of_range("Error: y-coordinate argument index out of bounds.");
    }

    return this->sheet[firstArgument][secondArgument];
}

const unsigned char& Graph::operator()(const unsigned long long int firstArgument, const unsigned long long int secondArgument) const
{
    if(firstArgument>=this->height)
    {
        throw std::out_of_range("Error: x-coordinate argument index out of bounds.");
    }

    else if(secondArgument>=this->width)
    {
         throw std::out_of_range("Error: y-coordinate argument index out of bounds.");
    }

    return this->sheet[firstArgument][secondArgument];
}
