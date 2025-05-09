#ifndef _HBANK_ACCOUNT_H_ // include guard
#define _HBANK_ACCOUNT_H_

// #pragma once // same effect as include guard if the compiler supports it.

class HBank_Account
{
private:
    double balance_hb{};

public:
    void set_balance_hb(double new_balance); // method (function) prototype
    double get_balance_hb(void); // method (function) prototype
};

// Function implementations are in a separate file named HBank_Account.cpp

#endif