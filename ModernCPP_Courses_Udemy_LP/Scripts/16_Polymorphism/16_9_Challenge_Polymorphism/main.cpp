// Section 16
// Challenge
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    // My own test cases
    std::vector<Account*> accounts;
    accounts.push_back(new Account{"Moe", 2000});
    accounts.push_back(new Savings_Account{"James", 4000, 5});
    accounts.push_back(new Trust_Account{"Bob", 2000, 4});
    accounts.push_back(new Checking_Account{"Joe", 1500});

    display(accounts);
    deposit(accounts, 100);
    withdraw(accounts, 1100);

    Checking_Account c;
    std::cout << c << std::endl;

    Account* ttt {new Trust_Account{"ttt", 666, 12}};
    std::cout << *ttt << std::endl;

    return 0;
}
