// Section 17
// Unique Pointers
#include <iostream>
#include <memory> // for smart pointers
#include <vector>

#include "Test_Class.h"
#include "Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Savings_Account.h"

using namespace std;

int main()
{

    /* // Tests and conventional ways without smart pointers
    Test_Class t1 {1000}; // Test constructor (1000)
                          // Test destructor (1000)

    Test_Class *t2 {new Test_Class{1000}}; // Test constructor (1000)
    delete t2;  // Test destructor (1000)
    */

    std::unique_ptr<Test_Class> u1{new Test_Class{1000}};
    // Test constructor (1000)
    // Destructor called automatically after out of scope (main function ends)

    std::unique_ptr<Test_Class> u2{std::make_unique<Test_Class>(2000)};
    // Test constructor (1000)
    // Destructor called automatically after out of scope (main function ends)

    std::unique_ptr<Test_Class> u3; // became nullptr automatically if unassigned
    // u3 = u1; // ERROR, not allowed to assign or copy unique pointers by this way.
    u3 = std::move(u1); // but we can move, u1 will be nullptr automatically after that
    // u3 now owns the object, u1 is now null. u1 can't own the object because we're not sharing ownership.
    if (!u1)
    {
        std::cout << "u1 is nullptr" << std::endl;
    }

    std::unique_ptr<Account> a1{std::make_unique<Checking_Account>("Moe", 5000)};
    std::cout << *a1 << std::endl; // [Checking_Account: Moe: 5000.00]
    a1->deposit(3000);
    std::cout << *a1 << std::endl; // [Checking_Account: Moe: 8000.00]

    std::vector<std::unique_ptr<Account>> accounts; // vector of unique pointers
    accounts.push_back(std::make_unique<Checking_Account>("James", 2300));
    accounts.push_back(std::make_unique<Savings_Account>("Veronica", 1111, 11));
    accounts.push_back(std::make_unique<Trust_Account>("Joe", 1400, 5));

    // for (const auto account: accounts) // ERROR, copy not allowed !!
    // {
    //     std::cout << *account << std::endl;
    // }

    for (const auto &account: accounts) // R-value &account is moved
    {
        std::cout << *account << std::endl;
    }

    // Outputs
    // [Checking_Account: James: 2300.00]
    // [Savings_Account: Veronica: 1111.00, 11.00]
    // [Trust Account: Joe: 1400.00, 5.00%, withdrawals: 0]

    std::cout << "----- main function ends here -----" << std::endl;

    return 0;
}
