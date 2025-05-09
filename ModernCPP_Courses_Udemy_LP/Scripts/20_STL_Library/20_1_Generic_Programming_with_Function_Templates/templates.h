#ifndef _TEMPLATES_H_
#define _TEMPLATES_H_

#include <iostream>

// using 1 parameter

template <typename T>
T min(T a, T b)
{
    return ((a < b) ? a : b);
}

// using 2 parameters

template <typename T1, typename T2>
void func(T1 a, T2 b)
{
    std::cout << a << " " << b << std::endl;
}

// another function

// void swap(int &a, int &b)
// {
//     int temp {a};
//     a = b;
//     b = temp;
// }

// template definition of above function

template <typename T>
void swap(T &a, T &b)
{
    T temp {a};
    a = b;
    b = temp;
}

#endif