#include "base_class_references.h"

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

Account::~Account() {}
Checking::~Checking() {}
Savings::~Savings() {}
Trust::~Trust() {}


void do_withdraw(Account &account, double amount)
{
    account.withdraw(amount);
}