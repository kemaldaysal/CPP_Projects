#ifndef _TEMPLATE_FUNCTIONS_H_
#define _TEMPLATE_FUNCTIONS_H_

#include <iostream>
#include <vector>

// Template function to display any vector

template <typename T>
void display(const std::vector<T> &vec)
{
    std::cout << "[ ";
    for (const auto &element: vec)
    {
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

#endif