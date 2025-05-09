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
        std::unique_ptr<Account> account1{std::make_unique<Checking_Account>("Joe", -200)};
    }
    catch (const Exception_IllegalBalance &ex)
    {
        std::cerr << ex.what() << std::endl;
    }

    try
    {
        std::unique_ptr<Account> account2 = std::make_unique<Trust_Account>("Brooke", 20, 2);
        try
        {
            account2->withdraw(40);
        }
        catch (const Exception_InsufficentFunds &ex)
        {
            std::cerr << ex.what() << std::endl;
        }
        catch (const Exception_MaxWithdrawalPercentReached &ex)
        {
            std::cerr << ex.what() << std::endl;
        }
        catch (const Exception_MaxWithdrawalsReached &ex)
        {
            std::cerr << ex.what() << std::endl;
        }
    }
    catch (const Exception_IllegalBalance &ex)
    {
        std::cerr << ex.what() << std::endl;
    }

    std::cout << "Program completed successfully" << std::endl;
    return 0;
}