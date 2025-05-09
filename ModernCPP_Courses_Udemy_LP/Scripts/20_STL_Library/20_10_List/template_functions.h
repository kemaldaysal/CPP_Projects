#ifndef _TEMPLATE_FUNCTIONS_H
#define _TEMPLATE_FUNCTIONS_H

#include <iostream>
#include <list>

template <typename T>
void display(const std::list<T> &l)
{
    std::cout << "[ ";
    for (const auto &elem : l)
    {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

#endif