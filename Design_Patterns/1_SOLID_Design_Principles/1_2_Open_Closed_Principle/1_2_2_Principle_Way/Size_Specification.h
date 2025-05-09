#ifndef _SIZE_SPECIFICATION_H_
#define _SIZE_SPECIFICATION_H_

#include "I_Specification.h"
#include "Product.h"

struct Size_Specification : I_Specification<Product>
{
    Size size;
    explicit Size_Specification(const Size s);
    virtual bool is_satisfied(Product *item) const override;
};

#endif