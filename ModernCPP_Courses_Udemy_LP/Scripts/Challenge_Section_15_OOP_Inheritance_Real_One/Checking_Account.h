#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "Account.h"

class Checking_Account : public Account
{
friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);

private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_fee_withdrawal = 1.5;

protected:
    double fee_withdrawal;

public:
    Checking_Account(std::string name = def_name, double balance = def_balance, double fee_withdrawal = def_fee_withdrawal);
    bool withdraw(double amount);
};

#endif