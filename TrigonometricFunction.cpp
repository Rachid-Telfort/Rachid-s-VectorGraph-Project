#include"TrigonometricFunction.h"

const long long int SineFunction::operator()(const long long int argument) const
{
    return sin(argument*15*3.14159265/180);
}

const long long int CosineFunction::operator()(const long long int argument) const
{
    return -cos(argument*15*3.14159265/180);
}

const long long int TangentFunction::operator()(const long long int argument) const
{
    return tan(argument*15*3.14159265/180);
}
