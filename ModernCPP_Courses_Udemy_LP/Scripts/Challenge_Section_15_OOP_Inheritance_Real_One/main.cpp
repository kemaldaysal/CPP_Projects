/*
    TO DO:
    Overload += for deposit
    Overload -= for withdrawal

*/


#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Manager.h"

using namespace std;

int main(void)
{
    cout.precision(2);
    cout << fixed;

    // Accounts
    std::vector <Account> accounts;
    // accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000});
    accounts.push_back(Account {"Curly", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    // Savings Accounts

    std::vector <Savings_Account> sav_accounts;
    // sav_accounts.push_back(Savings_Account {});
    sav_accounts.push_back(Savings_Account {"Superman"});
    sav_accounts.push_back(Savings_Account {"Batman", 2000});
    sav_accounts.push_back(Savings_Account{"Wonder Woman", 5000, 5.0});
    
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);


    // Checkings Accounts

    std::vector <Checking_Account> checking_accounts;
    // checking_accounts.push_back(Checking_Account {});
    checking_accounts.push_back(Checking_Account {"A"});
    checking_accounts.push_back(Checking_Account {"B", 2000});
    checking_accounts.push_back(Checking_Account {"C", 2000, 3.5});

    display(checking_accounts);
    deposit(checking_accounts, 1000);
    withdraw(checking_accounts, 2000);

    // Trust Accounts

    std::vector <Trust_Account> trust_accounts;
    // trust_accounts.push_back(Trust_Account {});
    trust_accounts.push_back(Trust_Account {"T1"});
    trust_accounts.push_back(Trust_Account {"T2", 2000});
    trust_accounts.push_back(Trust_Account {"T3", 5000});

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    deposit(trust_accounts, 5000);
    withdraw(trust_accounts, 1400);
    withdraw(trust_accounts, 1900);
    withdraw(trust_accounts, 1052.5);
    withdraw(trust_accounts, 1000);
    display(trust_accounts);

    return 0;
}
