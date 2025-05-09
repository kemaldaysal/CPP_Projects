#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

#include "I_Printable.h"
#include "Exception_IllegalBalance.h"

class Account : public I_Printable
{
private:   
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
    virtual void print(std::ostream &os) const override;

    // virtual void print(std::ostream &os) const override; // not needed here because this is abstract??

    virtual ~Account() = default;
};
#endif