#ifndef _INHERITANCE_4_PASSING_ARGUMENTS_TO_BASE_CLASS_CONSTRUCTORS_H_
#define _INHERITANCE_4_PASSING_ARGUMENTS_TO_BASE_CLASS_CONSTRUCTORS_H_

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
private:
    int doubled_value;
public:

    Derived();
    Derived(int i_doubled_value); // commented out because of "using" method
    ~Derived(); // commented out because of "using" method

};


#endif