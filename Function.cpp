#include"Function.h"

const long long int Function::operator()(const long long int argument) const
{
    srand(argument);

    return rand();
}
