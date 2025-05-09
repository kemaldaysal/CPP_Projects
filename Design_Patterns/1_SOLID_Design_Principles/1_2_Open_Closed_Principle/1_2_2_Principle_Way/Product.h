#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <iostream>

enum class Color
{
    red,
    green,
    blue
};
enum class Size
{
    small,
    medium,
    large
};

struct Product
{
    std::string name;
    Color color;
    Size size;
};

#endif