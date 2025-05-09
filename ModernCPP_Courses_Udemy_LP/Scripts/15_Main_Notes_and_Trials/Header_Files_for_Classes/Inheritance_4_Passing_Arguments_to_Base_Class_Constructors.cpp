#include "Inheritance_4_Passing_Arguments_to_Base_Class_Constructors.h"

Base::Base()
    : value{0}
{
    std::cout << "Base no-args constructor" << std::endl;
}

Base::Base(int x)
    : value{x}
{
    std::cout << "Base (int) overloaded constructor" << std::endl;
}

Base::~Base()
{
    std::cout << "Base destructor" << std::endl;
}

Derived::Derived()
: Base{}, doubled_value {}
{
    std::cout << "Derived no-args constructor" << std::endl;
}

Derived::Derived(int i_doubled_value)
: Base{i_doubled_value}, doubled_value {i_doubled_value*2}
{
    std::cout << "Derived overloaded int (" << i_doubled_value << ") constructor" << std::endl;
    std::cout << "Doubled result is " << doubled_value << std::endl;

}
Derived::~Derived()
{
    std::cout << "Derived destructor" << std::endl;
}