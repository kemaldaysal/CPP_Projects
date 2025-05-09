#ifndef _INHERITANCE_6_REDEFINING_BASE_CLASS_METHODS_ACCOUNT_H_
#define _INHERITANCE_6_REDEFINING_BASE_CLASS_METHODS_ACCOUNT_H_

#include <iostream>

class Account
{
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
protected:
    double balance;
public:
    Account();
    Account(double balance);
    void deposit(double amount);
    void withdraw(double amount);
};

#endif