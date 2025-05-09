#include "test_class.h"

Test_Class::Test_Class(int x)
    : x{x} {}

int Test_Class::get_x() const
{
    return x;
}

void Test_Class::set_x(int new_x)
{
    x = new_x;
}