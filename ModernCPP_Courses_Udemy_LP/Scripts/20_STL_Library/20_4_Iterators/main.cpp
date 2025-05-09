#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

// display any vector of integers using range-based for loop
void display(const std::vector<int> &vec)
{
    std::cout << "[ ";
    for (auto const &i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() // Regular iterator - basic scenarios 1
{
    std::cout << "\n==================" << std::endl;
    std::vector<int> nums1{1, 2, 3, 4, 5};
    // std::vector<int>::iterator it {nums1.begin()}; // longer declaration
    auto it{nums1.begin()}; // point iterator to 1
    std::cout << *it << " ";

    it++;
    std::cout << *it << " ";

    it += 2;
    std::cout << *it << " ";

    it -= 1;
    std::cout << *it << " ";

    it = (nums1.end() - 1);
    std::cout << *it << " ";
}

void test2() // Regular iterator - basic scenarios 2
{

    std::cout << "\n==================" << std::endl;

    std::vector<int> nums1{1, 2, 3, 4, 5};
    std::vector<int>::iterator it{nums1.begin()};
    while (it != nums1.end())
    {
        std::cout << *it << " ";
        it++;
    }

    std::cout << std::endl;

    it = nums1.begin();
    while (it != nums1.end())
    {
        *it = 0;
        it++;
    }

    display(nums1);
}

void test3() // Const iterator
{
    std::cout << "\n==================" << std::endl;

    std::vector<int> nums{1, 2, 3, 4, 5};

    // std::vector<int>::const_iterator it {nums.begin()};
    auto it{nums.cbegin()}; // we have to say cbegin here when we use auto, begin will make it regular iterator !!

    while (it != (nums.end()))
    {
        std::cout << *it << " ";
        it++;
    }

    /* // compiler error - read only, can't change pointed element
    while (it != nums.end())
    {
        *it = 5; // compiler error - read only
        it++;
    }
    */
}

void test4() // Reverse iterator
{
    std::cout << "\n==================" << std::endl;
    std::vector<int> nums{1, 2, 3, 4, 5};

    // std::vector<int>::reverse_iterator rit {nums.rbegin()};
    auto rit{nums.rbegin()};

    while (rit != nums.rend())
    {
        std::cout << *rit << " ";
        rit++;
    }
}

void test5() // const reverse iterator over a list
{
    std::cout << "\n==================" << std::endl;
    std::list<std::string> names{"Larry", "Moe", "Curly"};

    std::list<std::string>::const_reverse_iterator crit{names.crbegin()};
    // auto crit{names.crbegin()};

    std::cout << *crit << " ";
    crit++;
    std::cout << *crit << std::endl;
}

void test6() // iterator over a map
{
    std::cout << "\n==================" << std::endl;
    std::map<std::string, double> sensors{
        {"MAP", 25},
        {"MAF", 5.67},
        {"O2", 14.02}};

    std::map<std::string, double>::iterator it{sensors.begin()};
    // auto it {sensors.begin()};

    while (it != sensors.end())
    {
        std::cout << it->first << ": " << it->second << std::endl;
        it++;
    }
}

void test7() // iterate over a subset of a container
{
    std::cout << "\n==================" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto start {vec.begin()+2};
    auto finish {vec.end()-3};

    while (start != finish)
    {
        std::cout << *start << " ";
        start++;
    }
}

int main()
{

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();

    return 0;
}