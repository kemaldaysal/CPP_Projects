#include <iostream>
#include "base_class_references.h"

int main(void)
{

    Account a;
    Account &ref = a; // base class reference to Account
    ref.withdraw(1000); // In Account::withdraw, dynamic

    Trust t;
    Account &ref1 = t; // base class reference to Account, not to Trust !!
    ref1.withdraw(1000); // In Trust::withdraw, dynamic

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1, 1000);
    do_withdraw(a2, 2000);
    do_withdraw(a3, 3000);
    do_withdraw(a4, 4000);

    return 0;
}