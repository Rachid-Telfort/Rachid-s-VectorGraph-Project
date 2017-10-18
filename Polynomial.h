#ifndef POLYNOMIAL_H_INCLUDED
#define POLYNOMIAL_H_INCLUDED

#include<cstdlib>
#include<ctime>
#include<stdexcept>
#include<vector>
#include"Term.h"

class Polynomial//Class used to make polynomial functions to the graph portion of the program.
{
    private:
        std::vector<Term> terms;

    public:
        Polynomial(){};
        Polynomial(const unsigned long long int);//Makes a polynomial with a certain number of terms. However, the terms are random.
        Polynomial(const Term&);
        Polynomial(const Polynomial&);
        ~Polynomial();
        const size_t getNumberOfTerms() const;
        void pushTerm(const long long int, const long long int);
        void pushTerm(const Term&);
        const Term& operator[](const size_t) const;
        void clearTerms();
};

#endif//POLYNOMIAL_H_INCLUDED
