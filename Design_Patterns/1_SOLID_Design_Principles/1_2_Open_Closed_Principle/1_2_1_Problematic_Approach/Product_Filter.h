#ifndef _PRODUCT_FILTER_H_
#define _PRODUCT_FILTER_H_

#include "Product.h"
#include <iostream>
#include <vector>

struct Product_Filter
{
    std::vector<Product*> by_color(std::vector<Product*> items, Color color);
    std::vector<Product*> by_size(std::vector<Product*> items, Size size);
    std::vector<Product*> by_size_and_color(std::vector<Product*> items, Color color, Size size);
};
#endif