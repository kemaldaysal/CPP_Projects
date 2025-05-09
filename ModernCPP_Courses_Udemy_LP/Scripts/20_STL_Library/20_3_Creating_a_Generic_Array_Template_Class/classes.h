// Section 20
// Class template - Array

// Note: Since C++11, the STL has std::array which is a template-based array class
// Use std::array instead of raw arrays whenever possible !!

#ifndef _CLASSES_H_
#define _CLASSES_H_

#include <iostream>

template <typename T, int N>
class Array
{

    size_t size{N};
    T values[N];

    friend std::ostream &operator<<(std::ostream &os, const Array<T,N> &arr)
    {
        os << "[ ";
        for (const auto &item : arr.values)
        {
            os << item << " ";
        }
        os << "]" << std::endl;
        return os;
    }


public:

    Array() = default;
    Array(T init_val)
    {
        for (auto &item: values)
        {
            item = init_val;
        }
    }

    size_t get_size() const
    {
        return size;
    }

    void fill(T val)
    {
        for (auto &item: values)
        {
            item = val;
        }
    }

    // overloaded subscript operator for easy use
    T &operator[](size_t index)
    {
        return values[index];
    }

};

#endif