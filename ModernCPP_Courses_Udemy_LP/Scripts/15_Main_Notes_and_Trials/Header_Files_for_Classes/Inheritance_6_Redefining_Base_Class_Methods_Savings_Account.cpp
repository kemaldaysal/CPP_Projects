#include "Inheritance_6_Redefining_Base_Class_Methods_Savings_Account.h"

Savings_Account::Savings_Account()
    : Savings_Account{0.0, 0.0}
{
    std::cout << "--Savings_Account - No args constructor" << std::endl;
}
Savings_Account::Savings_Account(double balance, double interest_rate)
    : Account(balance), interest_rate{interest_rate}
{
    std::cout << "--Savings_Account - Overloaded double constructor" << std::endl;
}
void Savings_Account::deposit(double amount)
{
    amount = amount + (amount*(interest_rate/100));
    Account::deposit(amount); // let the parent do it
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &acc)
{
    os << "Savings Account balance: " << acc.balance << ", interest rate: " << acc.interest_rate;
    return os;
}
