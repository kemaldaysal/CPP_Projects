#ifndef _I_SPECIFICATION_H_
#define _I_SPECIFICATION_H_

#include <iostream>

template <typename T>
struct I_Specification
{
    virtual bool is_satisfied(T *item) const = 0; // pure virtual
    virtual ~I_Specification() = default;
};

#endif