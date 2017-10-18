#ifndef POLYNOMIALFUNCTION_H_INCLUDED
#define POLYNOMIALFUNCTION_H_INCLUDED

#include<cmath>
#include"Function.h"
#include"Polynomial.h"

class PolynomialFunction:public Function
{
    private:
        Polynomial operand;

    public:
        PolynomialFunction(){};
        PolynomialFunction(const Polynomial&);
        PolynomialFunction(const PolynomialFunction&);
        ~PolynomialFunction();
        void clearOperand();
        const long long int operator()(const long long int) const;
};

#endif//POLYNOMIALFUNCTION_H_INCLUDED
