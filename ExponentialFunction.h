#ifndef EXPONENTIALFUNCTION_H_INCLUDED
#define EXPONENTIALFUNCTION_H_INCLUDED

#include<cmath>
#include"Function.h"

class ExponentialFunction:public Function//This denotes the exponential function e^(x).
{
    public:
        ExponentialFunction(){};
        ~ExponentialFunction(){};
        const long long int operator()(const long long int) const;
};

#endif//EXPONENTIALFUNCTION_H_INCLUDED
