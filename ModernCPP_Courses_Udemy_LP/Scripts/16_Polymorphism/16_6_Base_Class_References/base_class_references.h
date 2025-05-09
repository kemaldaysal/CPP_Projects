#ifndef _BASE_CLASS_REFERENCES_H_
#define _BASE_CLASS_REFERENCES_H_

#include <iostream>

class Account
{
public:
    virtual void withdraw(double amount);
    virtual ~Account();
};

class Checking: public Account
{
public:
    virtual void withdraw(double amount) override;
    virtual ~Checking();
};

class Savings: public Account
{
public:
    virtual void withdraw(double amount) override;
    virtual ~Savings();
};

class Trust: public Account
{
public:
    virtual void withdraw(double amount) override;
    virtual ~Trust();
};

void do_withdraw(Account &account, double amount);

#endif