#ifndef _INHERITANCE_3_CONSTRUCTORS_AND_DESTRUCTORS_H_
#define _INHERITANCE_3_CONSTRUCTORS_AND_DESTRUCTORS_H_

#include <iostream>

class Base
{
private:
    int value;

public:
    Base();
    Base(int x);
    ~Base();
};

class Derived : public Base
{

using Base::Base; // this'll automatically inherit non-special constructors from base


private:
    int doubled_value;
public:

    Derived();
    // Derived(int i_doubled_value); // commented out because of "using" method
    // ~Derived(); // commented out because of "using" method

};

#endif