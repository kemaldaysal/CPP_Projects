#include "interfaces.h"
#include <iostream>

int main ()
{

    // Below code works as it should but
    // Account a;
    // std::cout << a << std::endl; // Account display

    // Checking c;
    // std::cout << c << std::endl; // Checking display

    // Savings s;
    // std::cout << s << std::endl; // Savings display

    // Trust t;
    // std::cout << t << std::endl; // Trust display            

    // These codes won't work as supposed, need fix
    // We fixed them by using a interface class with a new virtual inherited ostream function
    Account *p1 = new Account();
    std::cout << *p1 << std::endl; // Account display

    Account *p2 = new Checking();
    std::cout << *p2 << std::endl; // Account display !!!! expected Checking display // Fixed
    // We fixed them by using a interface class with a new virtual inherited ostream function

    Dog *dog = new Dog();
    std::cout << *dog << std::endl; // Woof woof 

    print(*dog); // Woof woof

return 0;
}