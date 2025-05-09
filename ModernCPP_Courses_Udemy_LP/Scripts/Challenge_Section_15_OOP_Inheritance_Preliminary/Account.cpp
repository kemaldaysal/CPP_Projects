#include "Account.h"

// bool Account::debug_logs {0};

Account::Account(std::string name, double balance)
    : name {name}, balance {balance}
{
}

bool Account::deposit(double amount)
{
    if (amount < 0)
    {
        std::cout << "Invalid input, enter a value bigger than 0" << std::endl;
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
        std::cout << "Insufficient balance, can't withdraw that much !!" << std::endl;
        return false;
    }
}
double Account::get_balance() const
{
    return balance;
}

std::ostream &operator<<(std::ostream &os, const Account &account)
{
    os << "[Account: " << account.name << ": " << account.balance << std::endl;
    return os;
}

