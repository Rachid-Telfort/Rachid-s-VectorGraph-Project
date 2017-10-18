#ifndef LOGARITHMFUNCTION_H_INCLUDED
#define LOGARITHMFUNCTION_H_INCLUDED

#include<cmath>
#include"Function.h"

class LogarithmFunction:public Function//This denotes the natural log function ln(x).
{
    public:
        LogarithmFunction(){};
        ~LogarithmFunction(){};
        const long long int operator()(const long long int) const;
};

#endif//LOGARITHMFUNCTION_H_INCLUDED
