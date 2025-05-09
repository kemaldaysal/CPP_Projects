#include "Size_Specification.h"

Size_Specification::Size_Specification(const Size s)
    : size{s} {}

bool Size_Specification::is_satisfied(Product *item) const
{
    return (item->size == size);
}