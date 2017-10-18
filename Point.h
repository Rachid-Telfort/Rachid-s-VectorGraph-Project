#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point//This class denotes a point that will be used to draw graphs and shapes in the program.
{
    private:
        long long int x;//This denotes the x-coordinate of a point.
        long long int y;//This denotes the y-coordinate of a point.

    public:
        Point();
        Point(const long long int, const long long int);
        Point(const Point&);
        ~Point();
        void setX(const long long int);
        const long long int getX() const;
        void setY(const long long int);
        const long long int getY() const;
        const bool operator<(const Point&) const;
};

#endif//POINT_H_INCLUDED
