#include "Inheritance_6_Redefining_Base_Class_Methods_Account.h"

Account::Account()
    : Account{0.0} // delegating constructor
{
    std::cout << "--Account - No args constructor" << std::endl;
}

Account::Account(double balance)
    : balance{balance}
{
    std::cout << "--Account - Overloaded double constructor" << std::endl;
}

void Account::deposit(double amount)
{
    std::cout << "--Account - deposit" << std::endl;
    balance += amount;
}

void Account::withdraw(double amount)
{
    std::cout << "--Account - withdraw" << std::endl;
    
    if (balance >= amount)
    {
        balance -= amount;
    }
    else 
    {
        std::cout << "Balance is not enough, can't withdraw that much!!" << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Account &account)
{
    os << "Account balance: " << account.balance;
    return os;
}
