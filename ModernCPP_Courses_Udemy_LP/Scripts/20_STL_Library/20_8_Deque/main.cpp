#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

#include "template_functions.h"

void test1();
void test2();
void test3();
void test4();
void test5();

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();

    return 0;
}

void test1() // declarations and initializations, [], at()
{
    std::cout << "\nTest1 =========================" << std::endl;

    std::deque<int> d{1, 2, 3, 4, 5};
    display(d); // [ 1 2 3 4 5 ]

    d = {2, 4, 5, 6};
    display(d); // [ 2 4 5 6 ]

    std::deque<int> d1(10, 100); // ten 100s in the deque
    display(d1); // 10 x 100s

    d[0] = 100;
    d.at(1) = 200;
    display(d); // [ 100 200 5 6 ]
}

void test2() // push_back, push_front, front, back, size
{
    std::cout << "\nTest2 =========================" << std::endl;

    std::deque<int> d{0, 0, 0};
    display(d); // [ 0 0 0 ]

    d.push_back(10);
    d.push_back(20);
    display(d); // [ 0 0 0 10 20 ]

    d.push_front(100);
    d.push_front(200);
    display(d); // [ 200 100 0 0 0 10 20 ]

    std::cout << "Front: " << d.front() << std::endl; // 200
    std::cout << "Back : " << d.back() << std::endl; // 20
    std::cout << "Size  : " << d.size() << std::endl; // 7

    d.pop_back();
    d.pop_front();
    display(d); // [ 100 0 0 0 10 ]
}

void test3() // conditional statements
{
    // insert all even numbers into the back of a deque and all
    // odd numbers into the front
    std::cout << "\nTest3 =========================" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> d;

    for (const auto &elem : vec)
    {
        if (elem % 2 == 0)
            d.push_back(elem);
        else
            d.push_front(elem);
    }
    display(d); // [ 9 7 5 3 1 2 4 6 8 10 ]
}

void test4() // push front vs. push back ordering
{
    std::cout << "\nTest4 =========================" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> d;

    for (const auto &elem : vec)
    {
        d.push_front(elem);
    }
    display(d); // [ 10 9 8 7 6 5 4 3 2 1 ] !!! <---

    d.clear();

    for (const auto &elem : vec)
    {
        d.push_back(elem);
    }
    display(d); // [ 1 2 3 4 5 6 7 8 9 10 ]
}

void test5() // Same as test4 using std::copy copy and front_inserter – back_inserter
{
    std::cout << "\nTest5 =========================" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> d;

    std::copy(vec.begin(), vec.end(), std::front_inserter(d));
    display(d); // [ 10 9 8 7 6 5 4 3 2 1 ]

    d.clear();

    std::copy(vec.begin(), vec.end(), std::back_inserter(d));
    display(d); // [ 1 2 3 4 5 6 7 8 9 10 ]
}