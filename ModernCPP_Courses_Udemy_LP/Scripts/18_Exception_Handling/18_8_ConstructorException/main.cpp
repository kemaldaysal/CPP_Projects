#include <iostream>
#include <memory>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Exception_IllegalBalance.h"

int main()
{
    try
    {
        std::unique_ptr<Account> moes_account {std::make_unique<Checking_Account>("Moe",-10.0)};
        std::cout << *moes_account << std::endl;
    }
    catch (const Exception_IllegalBalance &ex)
    {
        std::cerr << "Couldn't create account - negative balance" << std::endl;
    }

    std::cout << "Program completed successfully" << std::endl;
    return 0;
}