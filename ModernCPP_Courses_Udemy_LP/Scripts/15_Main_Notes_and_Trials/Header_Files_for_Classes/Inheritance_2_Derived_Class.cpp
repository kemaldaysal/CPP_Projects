#include "Inheritance_2_Derived_Class.h"

void Derived::access_base_members(void)
{
    a = 100; // OK since a is public in my parent, so it's public in me
    b = 200; // OK since a is protected in my parent, so it's protected in me.  
             // This is a member function, it's got access to it.
    // c = 300; // INACCESSIBLE since c was private in Base class and if we need to access or modify c, we can't do it directly in here. We have to use getter/setter functions provided in the base class !!

}

void Derived::change_private_parts_of_parent(int input)
{
    std::cout << "Changed b from " << b;
    b = input;
    std::cout << " to " << b << "." << std::endl;
}
