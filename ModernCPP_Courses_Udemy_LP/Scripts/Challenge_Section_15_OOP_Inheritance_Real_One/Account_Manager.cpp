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
    std::cout << "\n=== Depositing " << amount << "$ to all accounts ==================" << std::endl;

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
    std::cout << "\n=== Withdrawing " << amount << "$ from all accounts" << std::endl;

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
    for (const Savings_Account &account : accounts)
    {
        std::cout << account << std::endl;
    }
}
void deposit(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "\n=== Depositing " << amount << "$ to all savings accounts ==================" << std::endl;

    for (Savings_Account &account : accounts)
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
void withdraw(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "\n=== Withdrawing " << amount << "$ from all savings accounts" << std::endl;

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

// Utility helper functions for Checking Account class

void display(const std::vector<Checking_Account> &accounts)
{
    std::cout << "\n=== Checking Account list =============================" << std::endl;
    for (const Checking_Account &account : accounts)
    {
        std::cout << account << std::endl;
    }
}

void deposit(std::vector<Checking_Account> &accounts, double amount)
{
    std::cout << "\n=== Depositing " << amount << "$ to all checking accounts ==================" << std::endl;
    for (Checking_Account &account : accounts)
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

void withdraw(std::vector<Checking_Account> &accounts, double amount)
{
    std::cout << "\n=== Withdrawing " << amount << "$ from all checking accounts" << std::endl;

    for (Checking_Account &account : accounts)
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

// Utility helper functions for Trust Account class

void display(const std::vector<Trust_Account> &accounts)
{
    std::cout << "\n=== Trust Account list =============================" << std::endl;
    for (const Trust_Account &account : accounts)
    {
        std::cout << account << std::endl;
    }
}

void deposit(std::vector<Trust_Account> &accounts, double amount)
{
    std::cout << "\n=== Depositing " << amount << "$ to all trust accounts ==================" << std::endl;
    for (Trust_Account &account : accounts)
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

void withdraw(std::vector<Trust_Account> &accounts, double amount)
{
    std::cout << "\n=== Withdrawing " << amount << "$ from all trust accounts" << std::endl;

    for (Trust_Account &account : accounts)
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