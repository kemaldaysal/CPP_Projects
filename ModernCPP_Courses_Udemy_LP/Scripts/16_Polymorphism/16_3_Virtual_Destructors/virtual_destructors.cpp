#include "virtual_destructors.h"

void Account::withdraw(double amount) // "virtual" can't be put here
{
    std::cout << "In Account::withdraw" << std::endl;
}

void Checking::withdraw(double amount) // "virtual" can't be put here
{
    std::cout << "In Checking::withdraw" << std::endl;
}

void Savings::withdraw(double amount) // "virtual" can't be put here
{
    std::cout << "In Savings::withdraw" << std::endl;
}

void Trust::withdraw(double amount) // "virtual" can't be put here
{
    std::cout << "In Trust::withdraw" << std::endl;
}

Account::~Account() // "virtual" can't be put here
{
    std::cout << "Account::destructor" << std::endl;
}

Checking::~Checking() // "virtual" can't be put here
{
    std::cout << "Checking::destructor" << std::endl;
}

Savings::~Savings() // "virtual" can't be put here
{
    std::cout << "Savings::destructor" << std::endl;
}

Trust::~Trust() // "virtual" can't be put here
{
    std::cout << "Trust::destructor" << std::endl;
}