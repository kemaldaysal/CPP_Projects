#include "Frontend_Functions.h"

void print_ruler(const size_t &ruler_length)
{
    std::cout << std::setw(ruler_length) << std::setfill('-') << "" << std::endl; 
    std::cout << std::setfill(' ');
}

void print_legend(const size_t &ruler_length)
{
    std::cout << std::setw(ruler_length/2) << std::left << "Student";
    std::cout << std::setw(ruler_length/2) << std::right << "Score";
    std::cout << std::endl;
}