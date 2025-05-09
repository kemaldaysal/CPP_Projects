#ifndef _INHERITANCE_6_REDEFINING_BASE_CLASS_METHODS_SAVINGS_ACCOUNT_H_
#define _INHERITANCE_6_REDEFINING_BASE_CLASS_METHODS_SAVINGS_ACCOUNT_H_

#include "Inheritance_6_Redefining_Base_Class_Methods_Account.h"
#include <iostream>

/*
    Savings Account class
    Deposit method increments amount to be deposited by amount * int_rate percentage
    So a 1000 deposit at 5% interest rate will deposit 1000 + 50 = 1050

    Withdraw method doesn't specialize.
*/

class Savings_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &acc);

protected:
    double interest_rate;
public:
    Savings_Account();
    Savings_Account(double balance, double interest_rate); // balance will be handled by Account
    void deposit(double amount); // This is redefined since it'll override the Base method. 
    // Withdraw isn't redefined here, it'll be directly inherited.
};

#endif