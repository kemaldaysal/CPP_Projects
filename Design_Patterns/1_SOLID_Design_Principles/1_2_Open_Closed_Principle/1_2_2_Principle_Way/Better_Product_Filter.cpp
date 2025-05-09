#include "Better_Product_Filter.h"

std::vector<Product *> Better_Product_Filter::filter(std::vector<Product *> items, I_Specification<Product> &spec)
{
    std::vector<Product*> result;
    for (auto &item: items)
    {
        if (spec.is_satisfied(item))
        {
            result.push_back(item);
        }
    }
    return result;
}
