#ifndef _COLOR_SPECIFICATION_H_
#define _COLOR_SPECIFICATION_H_

#include "I_Specification.h"
#include "Product.h"

struct Color_Specification : I_Specification<Product>
{
    Color color;
    Color_Specification(const Color c);
    virtual bool is_satisfied(Product *item) const override;
};

#endif