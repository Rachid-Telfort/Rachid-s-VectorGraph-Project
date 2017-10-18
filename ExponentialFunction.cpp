#include"ExponentialFunction.h"

const long long int ExponentialFunction::operator()(const long long int argument) const
{
    return exp(argument*0.1);
}
