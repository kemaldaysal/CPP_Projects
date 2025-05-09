#include "Color_Specification.h"

Color_Specification::Color_Specification(const Color c)
    : color(c) {}

bool Color_Specification::is_satisfied(Product *item) const
{
    return (item->color == color);
}