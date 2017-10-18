#ifndef TERM_H_INCLUDED
#define TERM_H_INCLUDED

class Term//This class denotes a term that will be used to construct polynomial functions for the graph portion of the program.
{
    private:
        long long int coefficient;
        long long int exponent;

    public:
        Term();
        Term(const long long int, const long long int);
        Term(const Term&);
        ~Term();
        void setCoefficient(const long long int);
        const long long int getCoefficient() const;
        void setExponent(const long long int);
        const long long int getExponent() const;
};

#endif//TERM_H_INCLUDED
