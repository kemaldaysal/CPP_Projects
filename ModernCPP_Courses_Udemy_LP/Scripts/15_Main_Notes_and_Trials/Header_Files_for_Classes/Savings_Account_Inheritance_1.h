#ifndef _SAVINGS_ACCOUNT_INHERITANCE_1_H
#define _SAVINGS_ACCOUNT_INHERITANCE_1_H

#include "Account_Inheritance_1.h" // Including the base class

class Savings_Account : public Account
{
public:
    double interest_rate;
    
    Savings_Account();            // It's own constructor
    ~Savings_Account();           // It's own destructor
    void deposit(double amount);  // It's own deposit method
    void withdraw(double amount); // It's own withdraw method
};

#endif