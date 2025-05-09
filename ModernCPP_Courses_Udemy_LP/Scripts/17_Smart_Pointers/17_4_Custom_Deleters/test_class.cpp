#include "test_class.h"

Test_Class::Test_Class()
    : data{0}
{
    std::cout << "\tTest constructor (" << data << ")" << std::endl;
}

Test_Class::Test_Class(int data)
    : data{data}
{
    std::cout << "\tTest constructor (" << data << ")" << std::endl;
}
int Test_Class::get_data() const { return data; }

Test_Class::~Test_Class()
{
    std::cout << "\tTest destructor (" << data << ")" << std::endl;
}

void my_deleter(Test_Class *ptr)
{
    std::cout << "\tUsing my custom function deleter" << std::endl;
    delete ptr;
}
