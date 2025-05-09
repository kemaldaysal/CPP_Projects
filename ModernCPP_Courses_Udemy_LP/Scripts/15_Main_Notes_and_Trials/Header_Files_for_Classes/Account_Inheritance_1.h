#ifndef _ACCOUNT_INHERITANCE_1_H_
#define _ACCOUNT_INHERITANCE_1_H_

#include <iostream>

class Account
{
public:
    double balance;
    std::string name;

    Account();
    ~Account();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif