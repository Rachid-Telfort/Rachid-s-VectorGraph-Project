#include"Term.h"

Term::Term()
{
    this->coefficient=0;
    this->exponent=0;
}

Term::Term(const long long int coefficient, const long long int exponent)
{
    this->coefficient=coefficient;
    this->exponent=exponent;
}

Term::Term(const Term& argument)
{
    this->coefficient=argument.coefficient;
    this->exponent=argument.exponent;
}

Term::~Term()
{
    this->coefficient=0;
    this->exponent=0;
}

void Term::setCoefficient(const long long int coefficient)
{
    this->coefficient=coefficient;
}

const long long int Term::getCoefficient() const
{
    return this->coefficient;
}

void Term::setExponent(const long long int exponent)
{
    this->exponent=exponent;
}

const long long int Term::getExponent() const
{
    return this->exponent;
}
