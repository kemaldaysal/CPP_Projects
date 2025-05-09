#include "Inheritance_5_Copy_and_Move_Constructors_and_Assignments.h"

Base::Base()
    : value{}
{
    std::cout << "Base no-args constructor" << std::endl;
}

Base::Base(int x)
    : value{x}
{
    std::cout << "Base overloaded integer constructor" << std::endl;
}

Base::Base(const Base &other) // copy constructor
    : value{other.value}
{
    std::cout << "Base copy constructor" << std::endl;
}

Base &Base::operator=(const Base &rhs) // copy assignment
{
    std::cout << "Base copy assignment" << std::endl;
    if (this == &rhs)
    {
        return *this;
    }

    value = rhs.value;
    return *this;
}

Base::~Base()
{
    std::cout << "Base destructor" << std::endl;
}

//--------------------------------------

Derived::Derived()
    : Base{}
{
    std::cout << "Derived no-args constructor" << std::endl;
}
Derived::Derived(int x)
    : Base{x}, doubled_value{x * 2}
{
    std::cout << "Derived overloaded integer constructor" << std::endl;
}
Derived::Derived(const Derived &other)
    : Base(other), doubled_value{other.doubled_value}
{
    std::cout << "Derived copy constructor" << std::endl;
}
Derived &Derived::operator=(const Derived &rhs)
{
    std::cout << "Derived copy assignment operator" << std::endl;
    if (this == &rhs)
    {
        return *this;
    }
    Base::operator=(rhs);
    doubled_value = rhs.doubled_value;
    return *this;
}

Derived::~Derived()
{
    std::cout << "Derived destructor" << std::endl;
}