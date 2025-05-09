#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <cctype> // for using function that converts a char from uppercase to lowercase

#include "Person.h"

void test_find_primitive_type();
void test_find_object();
void test_count();
void test_count_if();
void test_replace();
void test_all_of();
void test_transform();

int main()
{
    test_find_primitive_type();
    test_find_object();
    test_count();
    test_count_if();
    test_replace();
    test_all_of();
    test_transform();

    return 0;
}

void test_find_primitive_type()
{
    std::cout << "===================" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5};

    auto loc{std::find(vec.begin(), vec.end(), 1)};
    // auto loc {std::find(std::begin(vec),std::end(vec), 1)}; // alternative syntax

    if (loc != std::end(vec))
    {
        std::cout << "Found the number: " << *loc << std::endl;
    }
    else
    {
        std::cout << "Couldn't find the number" << std::endl;
    }
}

void test_find_object()
{

    std::cout << "===================" << std::endl;

    std::list<Person> players{
        {"Larry", 18},
        {"Moe", 20},
        {"Curly", 21}};

    auto loc{std::find(players.begin(), players.end(), Person{"Moe", 20})};
    // This will use the overloaded equality operator that we overloaded !!

    if (loc != players.end())
    {
        std::cout << "Found player" << std::endl;
    }
    else
    {
        std::cout << "Player not found" << std::endl;
    }

    loc = std::find(players.begin(), players.end(), Person{"Moe", 15});
    // This will use the overloaded equality operator that we overloaded !!

    if (loc != players.end())
    {
        std::cout << "Found player" << std::endl;
    }
    else
    {
        std::cout << "Player not found" << std::endl;
    }
}

void test_count()
{
    std::cout << "===================" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5, 1, 2, 1};

    auto cnt{std::count(vec.begin(), vec.end(), 1)};

    std::cout << cnt << " occurences found" << std::endl;
}

void test_count_if()
{
    std::cout << "===================" << std::endl;

    // count only if the element is even
    std::vector<int> vec{1, 2, 3, 4, 5, 1, 2, 1, 100};
    auto cnt_even{std::count_if(vec.begin(), vec.end(), [](int x)
                                { return x % 2 == 0; })};
    std::cout << cnt_even << " even numbers found" << std::endl;

    // count only if the elements is odd
    auto cnt_odd{std::count_if(vec.begin(), vec.end(), [](int x)
                               { return x % 2 != 0; })};
    std::cout << cnt_odd << " odd numbers found" << std::endl;

    // count only if the element is >= 5
    auto cnt_bigger{std::count_if(vec.begin(), vec.end(), [](int x)
                                  { return (x >= 5); })};
    std::cout << cnt_bigger << " numbers are >= 5" << std::endl;
}

void test_replace()
{
    // replace 2s with 100s in a container

    std::cout << "===================" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5, 1, 2, 1};

    for (auto &element : vec)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    std::replace(vec.begin(), vec.end(), 2, 100);

    for (auto &element : vec)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

void test_all_of()
{
    std::cout << "===================" << std::endl;

    // return 1 if ALL of the elements match our criteria
    std::vector<int> vec{1, 3, 5, 7, 9, 1, 3, 13, 19, 5};
    if (std::all_of(vec.begin(), vec.end(), [] (int x) {return (x > 10);}))
    {
        std::cout << "All of the elements are > 10" << std::endl;
    }
    else 
    {
        std::cout << "Not all the elements are > 10" << std::endl;
    }

    if (std::all_of(vec.begin(), vec.end(), [] (int x) {return (x < 20);}))
    {
        std::cout << "All of the elements are < 20" << std::endl;
    }
    else 
    {
        std::cout << "Not all of the elements are < 20" << std::endl;
    }
}

void test_transform()
{
    // Transform elements in a container - usually used with strings
    std::cout << "===================" << std::endl;

    std::string str1 {"This is a test"};
    std::cout << "Before transform: " << str1 << std::endl;
    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper); // toupper from <cctype>
    // empty::___ means global scope !!
    std::cout << "After transform: " << str1 << std::endl;
}