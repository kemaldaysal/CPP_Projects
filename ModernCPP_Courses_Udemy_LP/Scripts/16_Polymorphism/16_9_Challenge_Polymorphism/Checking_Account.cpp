#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account{name, balance} {}

/* // Below implementation isn't needed if the base class isn't abstract.
bool Checking_Account::deposit(double amount) // Inherits the Account::deposit method
{
    return (Account::deposit(amount));
}
*/

bool Checking_Account::withdraw(double amount)
{
    amount += per_check_fee;
    return Account::withdraw(amount);
}

void Checking_Account::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[Checking_Account: " << name << ": " << balance << "]";
}
