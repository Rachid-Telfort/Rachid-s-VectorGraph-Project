#ifndef TRIGONOMETRICFUNCTION_H_INCLUDED
#define TRIGONOMETRICFUNCTION_H_INCLUDED

#include<cmath>
#include"Function.h"

class TrigonometricFuction:public Function
{
    public:
        TrigonometricFuction(){};
        virtual ~TrigonometricFuction(){};
        virtual const long long int operator()(const long long int) const=0;
};

class SineFunction:public TrigonometricFuction
{
    public:
        SineFunction(){};
        ~SineFunction(){};
        const long long int operator()(const long long int) const;
};

class CosineFunction:public TrigonometricFuction
{
    public:
        CosineFunction(){};
        ~CosineFunction(){};
        const long long int operator()(const long long int) const;
};

class TangentFunction:public TrigonometricFuction
{
    public:
        TangentFunction(){};
        ~TangentFunction(){};
        const long long int operator()(const long long int) const;
};

#endif//TRIGONOMETRICFUNCTION_H_INCLUDED
