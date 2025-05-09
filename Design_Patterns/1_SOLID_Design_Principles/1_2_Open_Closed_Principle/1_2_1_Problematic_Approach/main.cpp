// open for extension, closed for modification

#include <string>
#include <vector>
#include <iostream>

#include "Product.h"
#include "Product_Filter.h"

int main()
{
    Product apple{"Apple", Color::green, Size::small};
    Product tree{"Tree", Color::green, Size::large};
    Product house{"House", Color::blue, Size::large};

    std::vector<Product *> items{&apple, &tree, &house};

    Product_Filter pf;
    auto green_things {pf.by_color(items, Color::green)};

    for (auto &item: green_things)
        std::cout << item->name << " is green" << std::endl;

    return 0;
}