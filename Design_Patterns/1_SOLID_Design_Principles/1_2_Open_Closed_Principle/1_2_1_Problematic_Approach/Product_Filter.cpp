#include "Product_Filter.h"

std::vector<Product *> Product_Filter::by_color(std::vector<Product *> items, Color color)
{
    std::vector<Product *> result;
    for (auto &item : items)
    {
        if (item->color == color)
            result.push_back(item);
    }
    return result;
}

std::vector<Product *> Product_Filter::by_size(std::vector<Product *> items, Size size)
{
    std::vector<Product *> result;
    for (auto &item : items)
    {
        if (item->size == size)
            result.push_back(item);
    }
    return result;
}

std::vector<Product*> by_size_and_color(std::vector<Product*> items, Color color, Size size)
{
    std::vector<Product*> result;
    for (auto &item : items)
    {
        if ((item->color == color) && (item->size == size))
        {
            result.push_back(item);
        }
    }
}
