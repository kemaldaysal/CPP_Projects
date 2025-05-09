#include "Account_Inheritance_1.h"

Account::Account()
    : balance{0.0}, name{"NoName"}
{
}
Account::~Account()
{
}

void Account::deposit(double amount)
{
    std::cout << "Account deposit called with " << amount << std::endl;
}
void Account::withdraw(double amount)
{
    std::cout << "Account withdraw called with " << amount << std::endl;
}