#include "static_binded_class.h"

void Base::say_hello() const
{
    std::cout << "Hello - I'm a Base class object" << std::endl;
}

void Derived::say_hello() const
{
    std::cout << "Hello - I'm a Derived class object" << std::endl;
}

void greetings(const Base &obj)
{
    std::cout << "Greetings: ";
    obj.say_hello();
}
