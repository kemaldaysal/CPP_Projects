#include "Account_Manager.h"
// Utility helper functions for Account class

void display(const std::vector<Account> &accounts)
{
    std::cout << "\n=== Account list =============================" << std::endl;
    for (const Account &account : accounts)
    {
        std::cout << account << std::endl; // using overloaded insertion operator
    }
}

void deposit(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n=== Depositing same amount of money to all accounts ==================" << std::endl;

    for (Account &account : accounts)
    {
        if (account.deposit(amount))
        {
            std::cout << "Deposited " << amount << " to " << account << std::endl;
        }
        else
        {
            std::cout << "Failed deposit of " << amount << " to " << account << std::endl;
        }
    }
}

void withdraw(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n=== Withdrawing same amount of money from all accounts" << std::endl;

    for (Account &account : accounts)
    {
        if (account.withdraw(amount))
        {
            std::cout << "Withdrew " << amount << " from " << account << std::endl;
        }
        else
        {
            std::cout << "Failed Withdrawal of " << amount << " from " << account << std::endl;
        } 
    }
}

// Utility helper functions for Savings Account class

void display(const std::vector<Savings_Account> &accounts)
{
    std::cout << "\n=== Savings Account list =============================" << std::endl;
    for (const Savings_Account &account: accounts)
    {
        std::cout << account << std::endl;
    }
}
void deposit(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "\n=== Depositing same amount of money to all savings accounts ==================" << std::endl;

    for (Savings_Account &account : accounts)
    {
        if(account.deposit(amount))
        {
            std::cout << "Deposited " << amount << " to " << account << std::endl;
        }
        else 
        {
            std::cout << "Failed deposit of " << amount << " to " << account << std::endl;
        }
    }
}
void withdraw(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "\n=== Withdrawing same amount of money from all savings accounts" << std::endl;

    for (Savings_Account &account : accounts)
    {
        if (account.withdraw(amount))
        {
            std::cout << "Withdrew " << amount << " from " << account << std::endl;
        }
        else
        {
            std::cout << "Failed Withdrawal of " << amount << " from " << account << std::endl;
        }
    }
}