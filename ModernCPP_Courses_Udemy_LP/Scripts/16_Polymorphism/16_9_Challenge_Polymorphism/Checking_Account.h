#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include <iostream>
#include <string>
#include "Account.h"

class Checking_Account: public Account 
{
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);    
    // virtual bool deposit(double amount) override; // This re-implementation isn't needed if the base class isn't abstract.
    virtual bool withdraw(double) override;
    virtual void print(std::ostream &os) const override;

    virtual ~Checking_Account() = default;

    // Inherits the Account::deposit method //
};

#endif // _CHECKING_ACCOUNT_H_
