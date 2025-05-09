#ifndef _VIRTUAL_FUNCTIONS_H_
#define _VIRTUAL_FUNCTIONS_H_

#include <iostream>

class Account
{
public:
    virtual void withdraw(double amount); // only this "virtual" is necessary
};

class Checking : public Account
{
public:
    virtual void withdraw(double amount); // optional "virtual" but recommended 
};

class Savings : public Account
{
public:
    virtual void withdraw(double amount); // optional "virtual" but recommended 
};

class Trust : public Account
{
public:
    virtual void withdraw(double amount); // optional "virtual" but recommended 
};

#endif