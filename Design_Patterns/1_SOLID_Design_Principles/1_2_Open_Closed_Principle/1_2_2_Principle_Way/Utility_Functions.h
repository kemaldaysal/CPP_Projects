#include "And_Specification.h"
#include "Or_Specification.h"

// new:
template <typename T>
And_Specification<T> operator&&(const I_Specification<T> &first, const I_Specification<T> &second)
{
    return {first, second};
}

template <typename T>
Or_Specification<T> operator||(const I_Specification<T> &first, const I_Specification<T> &second)
{
    return {first, second};
}