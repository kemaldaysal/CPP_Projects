#include <iostream>
#include "classes.h"

int main()
{
    Array<int,5> nums;
    std::cout << "The size of nums is: " << nums.get_size() << std::endl; // 5
    std::cout << nums << std::endl; // [ random random random random random ]
    
    nums.fill(4); 
    std::cout << "The size of nums is: " << nums.get_size() << std::endl; // 5
    std::cout << nums << std::endl; // [ 4 4 4 4 4 ]

    nums[0] = 1000;
    nums[3] = -2000;
    std::cout << nums << std::endl; // [ 1000 4 4 -2000 4]

    Array<std::string, 10> strings {std::string{"KD"}}; // 10 elements init. as KD
    std::cout << "The size of strings is: " << strings.get_size() << std::endl; // 5
    std::cout << strings << std::endl; // 10 times KD

    strings[0] = std::string{"Ali"};
    // strings[0] = "Ali"; // why can't we just use this, no errors?
    std::cout << strings << std::endl; // 0. element is Ali now
    strings.fill(std::string{"X"});
    std::cout << strings << std::endl; // 10 times X

    return 0;
}