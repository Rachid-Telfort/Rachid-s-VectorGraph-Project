#include"Polynomial.h"

Polynomial::Polynomial(const unsigned long long int argument)
{
    std::srand(time(NULL));

    for(unsigned long long int termCount=0; termCount<argument; ++termCount)
    {
        this->pushTerm(std::rand(), std::rand());
    }
}

Polynomial::Polynomial(const Term& argument)
{
    this->pushTerm(argument);
}

Polynomial::Polynomial(const Polynomial& argument)
{
    this->terms=argument.terms;
}

Polynomial::~Polynomial()
{
    this->terms.clear();
}

const size_t Polynomial::getNumberOfTerms() const
{
    return this->terms.size();
}

void Polynomial::pushTerm(const long long int coefficient, const long long int exponent)
{
    this->pushTerm(Term(coefficient, exponent));
}

void Polynomial::pushTerm(const Term& argument)
{
    if(argument.getCoefficient()!=0)
    {
        if(this->terms.empty())
        {
            this->terms.push_back(argument);
        }

        else
        {
            for(std::vector<Term>::iterator termIterator=this->terms.begin(); termIterator!=this->terms.end(); ++termIterator)
            {
                if(termIterator->getExponent()<argument.getExponent())
                {
                    this->terms.insert(termIterator, argument);

                    break;
                }

                else if(termIterator->getExponent()>argument.getExponent()&&termIterator==this->terms.end()-1)
                {
                    this->terms.push_back(argument);

                    break;
                }

                else if(termIterator->getExponent()==argument.getExponent())
                {
                    termIterator=this->terms.insert(this->terms.erase(termIterator), Term(termIterator->getCoefficient()+argument.getCoefficient(), termIterator->getExponent()));

                    if(termIterator->getCoefficient()==0)
                    {
                        this->terms.erase(termIterator);
                    }

                    break;
                }
            }
        }
    }
}

const Term& Polynomial::operator[](const size_t argument) const
{
    if(argument>=this->terms.size())
    {
        throw std::runtime_error("Error: Argument index out of bounds.");
    }

    return this->terms[argument];
}

void Polynomial::clearTerms()
{
    this->terms.clear();
}
