#include "Lambda.h"

Lambda::Lambda(int y)
    : y{y} {}

void Lambda::operator()(int x) const
{
    std::cout << x + y << std::endl;
}