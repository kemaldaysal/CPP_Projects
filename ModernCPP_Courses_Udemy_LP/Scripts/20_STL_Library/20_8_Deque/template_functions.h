#ifndef _TEMPLATE_FUNCTIONS_H_
#define _TEMPLATE_FUNCTIONS_H_

#include <iostream>
#include <deque>

template <typename T>
void display(const std::deque<T> &d)
{
    std::cout << "[ ";
    for (const auto &element: d)
    {
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

#endif