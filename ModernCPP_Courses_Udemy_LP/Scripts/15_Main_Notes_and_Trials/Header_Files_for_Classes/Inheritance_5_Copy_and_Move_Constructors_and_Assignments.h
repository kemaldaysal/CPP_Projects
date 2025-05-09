#ifndef _INHERITANCE_5_COPY_AND_MOVE_CONSTRUCTORS_AND_ASSIGNMENTS_H_
#define _INHERITANCE_5_COPY_AND_MOVE_CONSTRUCTORS_AND_ASSIGNMENTS_H_

#include <iostream>

class Base
{
private:
    int value;

public:
    Base();
    Base(int x);
    Base(const Base &other);          // copy constructor
    Base &operator=(const Base &rhs); // copy assignment
    ~Base();
};

class Derived : public Base
{
private:
    int doubled_value;

public:
    Derived();
    Derived(int x);
    Derived(const Derived &other);
    Derived&operator=(const Derived &rhs);
    ~Derived();
};

#endif