#ifndef _BETTER_PRODUCT_FILTER_H_
#define _BETTER_PRODUCT_FILTER_H_

#include <iostream>
#include "I_Filter.h"
#include "I_Specification.h"
#include "Product.h"

struct Better_Product_Filter : I_Filter<Product>
{
    virtual std::vector<Product *> filter(std::vector<Product *> items, I_Specification<Product> &spec) override;
};

#endif