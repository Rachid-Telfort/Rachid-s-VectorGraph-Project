#include"PolynomialFunction.h"

PolynomialFunction::PolynomialFunction(const Polynomial& argument)
{
    for(size_t termCount=0; termCount<argument.getNumberOfTerms(); ++termCount)
    {
        this->operand.pushTerm(argument[termCount]);
    }
}

PolynomialFunction::PolynomialFunction(const PolynomialFunction& argument)
{
    for(size_t termCount=0; termCount<argument.operand.getNumberOfTerms(); ++termCount)
    {
        this->operand.pushTerm(argument.operand[termCount]);
    }
}

PolynomialFunction::~PolynomialFunction()
{
    this->clearOperand();
}

void PolynomialFunction::clearOperand()
{
    this->operand.clearTerms();
}

const long long int PolynomialFunction::operator()(const long long int argument) const
{
    long long int result=0;

    for(size_t termCount=0; termCount<this->operand.getNumberOfTerms(); ++termCount)
    {
        if(this->operand[termCount].getExponent()<0)
        {
            result+=this->operand[termCount].getCoefficient()/std::pow(argument, -this->operand[termCount].getExponent());
        }

        else
        {
            result+=this->operand[termCount].getCoefficient()*std::pow(argument, this->operand[termCount].getExponent());
        }
    }

    return result;
}
