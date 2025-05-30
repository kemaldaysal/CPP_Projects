#include "Account.h"

Account::Account(std::string name, double balance)
    : name{name}, balance{balance}
{ // new codes for exception handling
    if (balance < 0)
        throw Exception_IllegalBalance();
}

bool Account::deposit(double amount)
{
    if (amount < 0)
    {
        return false;
    }
    else
    {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
        return true;
    }
    else
    {
        throw Exception_InsufficentFunds();
    }
}

void Account::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[Account: " << name << ": " << balance << "]";
}