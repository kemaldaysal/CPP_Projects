#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"


class Trust_Account : public Savings_Account
{
friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);

    // static size_t count_withdrawals;
    // static double limit_withdrawal_percent;

private:
    static constexpr const char* def_name {"Unnamed Trust Account"};
    static constexpr double def_balance {0.0};
    static constexpr double def_int_rate {5.0};
    static constexpr double bonus_amount {50.00};
    static constexpr double bonus_threshold {5000.00};
    static constexpr size_t max_withdrawals {3};
    static constexpr double max_withdrawal_percent {0.2};

protected:
    size_t num_withdrawals;

public:

    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    // Deposits of $5000.0 or more will receive $50 bonus
    bool deposit(double amount);

    // Only allowed maximum of 3 withdrawals, each can be up to a maximum of %20 of the account's value
    bool withdraw(double amount);
};



#endif