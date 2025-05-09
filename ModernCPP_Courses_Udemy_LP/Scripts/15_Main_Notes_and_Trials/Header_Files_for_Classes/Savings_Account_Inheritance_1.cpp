#include "Savings_Account_Inheritance_1.h"

Savings_Account::Savings_Account() // It's own constructor
: interest_rate {3.0}
{
}
Savings_Account::~Savings_Account() // It's own destructor
{
}

void Savings_Account::deposit(double amount) // It's own deposit method
{
    std::cout << "Savings Account deposit called with " << amount << std::endl;
}
void Savings_Account::withdraw(double amount) // It's own withdraw method
{
    std::cout << "Savings Account withdraw called with " << amount << std::endl;
}