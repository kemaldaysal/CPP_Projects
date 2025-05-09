#include "Test.h"

Test::Test()
    : data{0}
{
    std::cout << "\tTest constructor (" << data << ")" << std::endl;
}

Test::Test(int data)
    : data{data}
{
    std::cout << "\tTest constructor (" << data << ")" << std::endl;
}

int Test::get_data() const
{
    return data;
}

Test::~Test()
{
    std::cout << "\tTest destructor (" << data << ")" << std::endl;
}

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make()
{
    return (std::make_unique<std::vector<std::shared_ptr<Test>>>());
}

void fill(std::vector<std::shared_ptr<Test>> &vec, size_t num)
{
    int input{};

    for (size_t i{}; i < num; i++)
    {
        std::cout << "Enter data point [" << (i + 1) << "] : ";
        std::cin >> input;

        vec.push_back(std::make_shared<Test>(input));
    }
}

void display(const std::vector<std::shared_ptr<Test>> &vec)
{
    std::cout << "\nDisplaying vector data" << std::endl;
    std::cout << "=======================" << std::endl;

    for (const auto &ptr_element : vec)
    {
        std::cout << (ptr_element->get_data()) << std::endl;
    }
    std::cout << "=======================" << std::endl;
}