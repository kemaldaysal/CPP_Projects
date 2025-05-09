#include "test_class.h"
#include <iostream>
#include <memory>

int main()
{
    { // Using a function
        std::shared_ptr<Test_Class> ptr1{new Test_Class{100}, my_deleter};
    }

    std::cout << "=================" << std::endl;

    { // Using lambda expression
        std::shared_ptr<Test_Class> ptr2{new Test_Class{200},
            [] (Test_Class *ptr) 
            {
                std::cout << "\tUsing my custom function deleter" << std::endl;
                delete ptr;
            }};
    }

    return 0;
}