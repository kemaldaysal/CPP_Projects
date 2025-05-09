#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double fee_withdrawal)
    : Account{name, balance}, fee_withdrawal{fee_withdrawal}
{
}

bool Checking_Account::withdraw(double amount)
{
    // if (amount > balance)
    // {
    //     std::cout << "Insufficient funds, can't withdraw that much !!" << std::endl;
    //     return false;
    // }
    // else 
    // {
    //     balance = balance - (amount + fee_withdrawal);
    //     return true;
    // }

    return Account::withdraw(amount + fee_withdrawal);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account)
{
    os << "[Checking Account: " << account.name << ": " << account.balance << " with a " << account.fee_withdrawal << "$ fee per withdrawal." << std::endl ;
    return os;
}