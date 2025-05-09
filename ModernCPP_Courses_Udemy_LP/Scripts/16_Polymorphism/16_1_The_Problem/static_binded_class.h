#ifndef _STATIC_BINDED_CLASS_H_
#define _STATIC_BINDED_CLASS_H_

#include <iostream>

class Base
{

public:
    void say_hello() const;
};

class Derived: public Base
{
public:
    void say_hello() const;
};

void greetings(const Base &obj);

#endif