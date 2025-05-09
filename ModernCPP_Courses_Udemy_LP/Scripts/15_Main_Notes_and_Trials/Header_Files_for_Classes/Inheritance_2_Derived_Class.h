#ifndef _INHERITANCE_2_DERIVED_CLASS_H_
#define _INHERITANCE_2_DERIVED_CLASS_H_

#include "Inheritance_2_Base_Class.h"
#include <iostream>

class Derived : public Base
{
    // Note: friends of Derived have access to ONLY what Derived has access to, not anymore
    // a will be public
    // b will be protected
    // c will NOT BE ACCESSIBLE

public:
    void access_base_members(void);
    void change_private_parts_of_parent(int input);
};

#endif