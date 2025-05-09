#include <iostream>
#include "static_binded_class.h"

#include <memory> // To use smart pointers

int main(void)
{

    Base b;
    b.say_hello(); // Base method called

    Derived d;
    d.say_hello(); // Derived method called

    Base *p = new Derived();
    p->say_hello(); // !!! Base method called again instead of Derived method
    // Since Derived also "Is-A" Base.
    // The problem of default static binding

    greetings(b); // Base method called
    greetings(d); // Base method called instead of Derived !!!

    // We didn't learn smart pointers yet but this problem persists on smart pointers, too.
    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    ptr1->say_hello(); // Base method called instead of Derived !!!

    // smart pointers delete themselves auto after usage
    delete p;

    return 0;
}