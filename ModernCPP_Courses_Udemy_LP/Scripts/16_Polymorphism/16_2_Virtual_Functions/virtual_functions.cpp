#include "virtual_functions.h"

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
