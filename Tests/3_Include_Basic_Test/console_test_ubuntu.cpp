#include <iostream>

#include "test_class.h"

int main()
{
	std::cout << "Hello Ubuntu" << std::endl;
    
    Test_Class obj_test_class;

    std::cout << obj_test_class.get_x() << std::endl;

    obj_test_class.set_x(obj_test_class.get_x()*2);
    
    std::cout << obj_test_class.get_x() << std::endl;

    return 0;
}
