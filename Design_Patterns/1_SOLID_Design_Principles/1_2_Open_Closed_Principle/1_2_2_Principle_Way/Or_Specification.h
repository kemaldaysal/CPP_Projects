#ifndef _OR_SPECIFICATION_H_
#define _OR_SPECIFICATION_H_

#include "I_Specification.h"

template <typename T>
struct Or_Specification : I_Specification<T>
{
    const I_Specification<T> &first;
    const I_Specification<T> &second;

    Or_Specification(const I_Specification<T> &first, const I_Specification<T> &second)
        : first(first), second(second)  
    {}

    virtual bool is_satisfied(T *item) const override
    {
        return (first.is_satisfied(item) || second.is_satisfied(item)); 
    }
};

#endif