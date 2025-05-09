#include "Trust_Account.h"

// size_t Trust_Account::count_withdrawals{3};
// double Trust_Account::limit_withdrawal_percent{0.2};

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account{name, balance, int_rate}, num_withdrawals{0}
{
}

// Deposits of $5000.0 or more will receive $50 bonus
bool Trust_Account::deposit(double amount)
{
    if (amount < 0)
    {
        std::cout << "Amount to be deposited can't be less than 0." << std::endl;
        return 0;
    }
    
    if (amount >= bonus_threshold)
    {
        amount += bonus_amount;
        std::cout << "Congrats, you've received a bonus 50$ for depositting >= 5000$ !!" << std::endl;
    }
    return (Savings_Account::deposit(amount));
}

// Only allowed maximum of 3 withdrawals, each can be up to a maximum of %20 of the account's value
bool Trust_Account::withdraw(double amount)
{
    if (amount > balance)
    {
        std::cout << "Insufficient funds, can't withdraw that much !!" << std::endl;
        return 0;
    }

    if (num_withdrawals < max_withdrawals)
    {
        if (amount < (balance * max_withdrawal_percent))
        {
            // balance -= amount;

            num_withdrawals++;
            return Savings_Account::withdraw(amount);
        }
        else
        {
            std::cout << "Withdrawal failed, the amount must be less than " << (balance*max_withdrawal_percent) << "$. (Withdrawals left: " << (max_withdrawals - num_withdrawals) << ")" << std::endl;
            return 0;
        }
    }
    else
    {
        std::cout << "Withdrawal failed, yearly withdrawal limit reached for this account." << std::endl;
        return 0;
    }
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
    os << "[Trust Account: " << account.name << ": " << account.balance << "$ (withdrawals left: " << (account.max_withdrawals - account.num_withdrawals) << ")" << std::endl;
    return os;
}

