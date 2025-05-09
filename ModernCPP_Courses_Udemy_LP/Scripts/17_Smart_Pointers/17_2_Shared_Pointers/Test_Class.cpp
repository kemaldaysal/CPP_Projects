#include "Test_Class.h"

Test_Class::Test_Class()
    : data{0}
{
    std::cout << "Test constructor (" << data << ")" << std::endl;
}

Test_Class::Test_Class(int data)
    : data{data}
{
    std::cout << "Test constructor (" << data << ")" << std::endl;
}

int Test_Class::get_data() const
{
    return data;
}

Test_Class::~Test_Class()
{
    std::cout << "Test destructor (" << data << ")" << std::endl;
}

void func(std::shared_ptr<Test_Class> p)
{
    std::cout << "Use count: " << p.use_count() << std::endl;
}
