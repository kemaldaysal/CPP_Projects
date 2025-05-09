#include "using_override.h"

int main(void)
{
    Base *p1 = new Base();
    p1->say_hello(); // Base::say_hello()

    Derived *p2 = new Derived();
    p2->say_hello(); // Derived::say_hello()

    Base *p3 = new Derived();
    p3->say_hello(); // Derived::say_hello() // Fixed !!

    delete p1;
    delete p2;
    delete p3;

    return 0;
}