#ifndef _INHERITANCE_2_BASE_CLASS_H_
#define _INHERITANCE_2_BASE_CLASS_H_

#include <iostream>

class Base
{
    // Note: friends of Base have access to all

public:
    int a{};
    void display();

protected:
    int b{};

private:
    int c{};
};

#endif