#ifndef _INTERFACES_H_
#define _INTERFACES_H_

#include <iostream>

class I_Printable
{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);

public:
    virtual void print(std::ostream &os) const = 0; // pure virtual function
};

class Account : public I_Printable
{
    // friend std::ostream &operator<<(std::ostream &os, const Account &acc); // without dynamic binding, won't work dynamic
public:
    virtual void withdraw(double amount);
    virtual void print(std::ostream &os) const override; // new virtual method
    virtual ~Account();
};

class Checking : public Account
{
    // friend std::ostream &operator<<(std::ostream &os, const Checking &acc); // without dynamic binding, won't work dynamic
public:
    virtual void withdraw(double amount) override;
    virtual void print(std::ostream &os) const override; // new virtual method
    virtual ~Checking();
};

class Savings : public Account
{
    // friend std::ostream &operator<<(std::ostream &os, const Savings &acc); // without dynamic binding, won't work dynamic
public:
    virtual void withdraw(double amount) override;
    virtual void print(std::ostream &os) const override; // new virtual method
    ~Savings();
};

class Trust : public Account
{
    // friend std::ostream &operator<<(std::ostream &os, const Trust &acc); // without dynamic binding, won't work dynamic
public:
    virtual void withdraw(double amount) override;
    virtual void print(std::ostream &os) const override; // new virtual method
    ~Trust();
};

class Dog : public I_Printable
{
public:
    virtual void print(std::ostream &os) const override;
    ~Dog();
};

void print(const I_Printable &obj); // portable function

#endif