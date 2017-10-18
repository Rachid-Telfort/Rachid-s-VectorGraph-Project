#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include<cstdlib>
#include<ctime>

class Function//This class denotes a generic function. If one chooses to draw this function on a graph, a random set of points will be drawn on the graph.
{
    public:
        Function(){};
        virtual ~Function(){};
        virtual const long long int operator()(const long long int) const;
};

#endif//FUNCTION_H_INCLUDED
