#include "interfaces.h"

void Account::withdraw(double amount)
{
    std::cout << "In Account::withdraw" << std::endl;
}

void Checking::withdraw(double amount) 
{
    std::cout << "In Checking::withdraw" << std::endl;
}

void Savings::withdraw(double amount)
{
    std::cout << "In Savings::withdraw" << std::endl;
}

void Trust::withdraw(double amount)
{
    std::cout << "In Trust::withdraw" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const I_Printable &obj)
{
    obj.print(os);
    return os;
}

void print(const I_Printable &obj) // portable function
{
    std::cout << obj << std::endl;
}

void Account::print(std::ostream &os) const
{
    os << "Account display";
}

void Checking::print(std::ostream &os) const
{
    os << "Checking display";
}

void Savings::print(std::ostream &os) const
{
    os << "Savings display";
}

void Trust::print(std::ostream &os) const
{
    os << "Trust display";
}

void Dog::print(std::ostream &os) const
{
    os << "Woof woof";
}

Account::~Account() {}
Checking::~Checking() {}
Savings::~Savings() {}
Trust::~Trust() {}

Dog::~Dog() {}

/* // These aren't useful anymore since they won't work as dynamic binding. We created their virtual versions.
std::ostream &operator<<(std::ostream &os, const Account &acc)
{
    os << "Account display";
    return os;
}

std::ostream &operator<<(std::ostream &os, const Checking &acc)
{
    os << "Checking display";
    return os;
}

std::ostream &operator<<(std::ostream &os, const Savings &acc)
{
    os << "Savings display";
    return os;
}

std::ostream &operator<<(std::ostream &os, const Trust &acc)
{
    os << "Trust display";
    return os;
}
*/