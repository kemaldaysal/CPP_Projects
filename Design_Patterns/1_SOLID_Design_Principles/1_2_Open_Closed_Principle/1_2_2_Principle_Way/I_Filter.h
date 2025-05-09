#ifndef _I_FILTER_H_
#define _I_FILTER_H_

#include <iostream>
#include <vector>
#include "I_Specification.h"

template <typename T>
struct I_Filter
{
    virtual std::vector<T *> filter(std::vector<T *> items, I_Specification<T> &spec) = 0; // pure virtual
    virtual ~I_Filter() = default;
};

#endif