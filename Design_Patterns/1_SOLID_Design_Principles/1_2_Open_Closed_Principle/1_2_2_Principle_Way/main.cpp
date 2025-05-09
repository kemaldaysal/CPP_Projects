// open for extension, closed for modification

#include <string>
#include <vector>
#include <iostream>

#include "Color_Specification.h"
#include "Size_Specification.h"
#include "Better_Product_Filter.h"
#include "Utility_Functions.h"

int main()
{
    Product apple{"Apple", Color::green, Size::small};
    Product tree{"Tree", Color::green, Size::large};
    Product house{"House", Color::blue, Size::large};

    const std::vector<Product *> items{&apple, &tree, &house};

    // Old Codes without Open-Closed Principle
    /*
    Product_Filter pf;
    auto green_things {pf.by_color(items, Color::green)};

    for (auto &item: green_things)
        std::cout << item->name << " is green" << std::endl;
    */

    Better_Product_Filter bf;
    Color_Specification green(Color::green);
    auto green_things{bf.filter(items, green)};

    for (auto &item : green_things)
    {
        std::cout << item->name << " is green" << std::endl;
    }
    /* Outputs:
    Apple is green, Tree is green
    */

    Size_Specification large(Size::large);
    And_Specification<Product> green_and_large(green, large);
    // auto big_green_things {bf.filter(items, green_and_large)};

    auto spec {green && large}; // from Utility_Functions.h
    for (auto &item : bf.filter(items, spec))
        std::cout << item->name << " is green and large" << std::endl;
    // Outputs: Tree is green and large

    Color_Specification blue {Color::blue};
    auto spec2 {blue || large};
    for (auto &item : bf.filter(items, spec2))
        std::cout << item->name << " is blue or large" << std::endl;

    /*
    Outputs: Tree is blue or large
             House is blue or large
    */
    return 0;
}