#ifndef _USING_OVERRIDE_H_
#define _USING_OVERRIDE_H_

#include <iostream>

class Base
{
public:
    virtual void say_hello() const;
    virtual ~Base();
};

class Derived : public Base
{
public:
    virtual void say_hello() const override; // Fixed // Notice i forgot the const !! Hence this is redefined, not overridden.
    virtual ~Derived();
};

#endif
