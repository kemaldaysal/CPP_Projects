#include <iostream>
#include "virtual_functions.h"

int main(void)
{

    std::cout << "\n === Pointers === " << std::endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    std::cout << "\n === Clean up === " << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}