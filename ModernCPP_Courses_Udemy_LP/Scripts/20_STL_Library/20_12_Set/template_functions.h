#ifndef _TEMPLATE_FUNCTIONS_H_
#define _TEMPLATE_FUNCTIONS_H_

#include <iostream>
#include <set>

template <typename T>
void display(const std::set<T> &list)
{
    std::cout << "[ ";
    for (const auto &elem : list)
    {
        std::cout << elem << " ";
    }

    std::cout << "]" << std::endl;
}

#endif