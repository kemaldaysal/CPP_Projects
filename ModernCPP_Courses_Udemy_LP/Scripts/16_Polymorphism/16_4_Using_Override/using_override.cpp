#include "using_override.h"

void Base::say_hello() const
{
    std::cout << "Hello from Base" << std::endl;
}

Base::~Base()
{}

void Derived::say_hello() const // Notice i forgot the const !!
{
    std::cout << "Hello from Derived" << std::endl;
}

Derived::~Derived()
{}