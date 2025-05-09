#include <iostream>
#include <vector>
#include <algorithm>

#include "Person.h"
#include "Template_Functions.h"

void display2(const std::vector<int> &vec);
void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();
void test8();
void test9();
void test10();
void test11();

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    test11();

    return 0;
}

void display2(const std::vector<int> &vec) // for_each, lambda functions
{
    std::cout << "[ ";

    std::for_each(vec.begin(), vec.end(),
                  [](int x)
                  { std::cout << x << " "; });

    std::cout << "]" << std::endl;
}

void test1() // initialization and declaration, using our custom display functions
{
    std::cout << "---Test1-----------------" << std::endl;

    std::vector<int> vec1{1, 2, 3, 4, 5};
    display(vec1); // [ 1 2 3 4 5 ]

    vec1 = {2, 4, 5, 6};
    display2(vec1); // [ 2 4 5 6 ]

    std::vector<int> vec2(10, 100);
    display(vec2); // 10x 100s in the vector
}

void test2() // size, max_size, capacity, shrink_to_fit, reserve
{
    std::cout << "---Test2-----------------" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5};
    display(vec); // [ 1 2 3 4 5 ]

    std::cout << "vec size: " << vec.size() << std::endl;         // 5
    std::cout << "vec max size: " << vec.max_size() << std::endl; // 2305843009213693951
    std::cout << "vec capacity: " << vec.capacity() << std::endl; // 5

    vec.push_back(6);
    display(vec); // [ 1 2 3 4 5 6 ]

    // Whenever you exceed the capacity, it'll double the capacity.

    std::cout << "vec size: " << vec.size() << std::endl;         // 6
    std::cout << "vec max size: " << vec.max_size() << std::endl; // same
    std::cout << "vec capacity: " << vec.capacity() << std::endl; // 10

    vec.shrink_to_fit();
    display(vec); // [ 1 2 3 4 5 6 ]

    std::cout << "vec size: " << vec.size() << std::endl;         // 6
    std::cout << "vec max size: " << vec.max_size() << std::endl; // same
    std::cout << "vec capacity: " << vec.capacity() << std::endl; // 10 -> 6

    vec.reserve(100);
    display(vec); // [ 1 2 3 4 5 6 ]

    std::cout << "vec size: " << vec.size() << std::endl;         // 6
    std::cout << "vec max size: " << vec.max_size() << std::endl; // same
    std::cout << "vec capacity: " << vec.capacity() << std::endl; // 6 -> 100
}

void test3() // [], at()
{
    std::cout << "---Test3-----------------" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5};
    display(vec); // [ 1 2 3 4 5 ]

    vec[0] = 100;
    vec.at(1) = 200;

    display(vec); // [ 100 200 3 4 5 ]
}

void test4() // push_back, emplace_back
{
    std::cout << "---Test3-----------------" << std::endl;
    std::vector<Person> stooges;

    Person p1{"Larry", 18};
    display(stooges); // [ ]

    stooges.push_back(p1);
    display(stooges); // [ Larry: 18 ]

    stooges.push_back(Person{"Moe", 25});
    display(stooges); // [ Larry: 18 Moe: 25 ]

    stooges.emplace_back("Curly", 30);
    display(stooges); // [ Larry: 18 Moe: 25 Curly: 30 ]
}

void test5() // front, back, pop_back
{
    std::cout << "---Test5-----------------" << std::endl;
    std::vector<Person> stooges{
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 30}};

    display(stooges);                                       // [ Larry: 18 Moe: 25 Curly: 30 ]
    std::cout << "Front: " << stooges.front() << std::endl; // Front: Larry: 18
    std::cout << "Back: " << stooges.back() << std::endl;   // Back: Curly: 30

    stooges.pop_back();
    display(stooges); // [ Larry: 18 Moe: 25 ]
}

void test6() // clear, erase
{
    std::cout << "---Test6-----------------" << std::endl;
    std::vector<int> vec{1, 2, 3, 4, 5};

    display(vec); // [ 1 2 3 4 5 ]

    vec.clear();  // remove all elements
    display(vec); // [ ]

    vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(vec); // [ 1 2 3 4 5 6 7 8 9 10 ]
    vec.erase(vec.begin(), vec.begin() + 2);
    display(vec); // [ 3 4 5 6 7 8 9 10 ]

    vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // erase all even numbers
    auto it = vec.begin();
    while (it != vec.end())
    {
        if (*it % 2 == 0)
        {
            it = vec.erase(it);
            // Since the vec.erase invalidates the iterator, we must assign the returned iterator to continue.
        }
        else
        {
            it++; // only increment if not erased !
        }
    }
    display(vec); // [ 1 3 5 7 9 ]
}

void test7() // swap
{
    std::cout << "---Test7-----------------" << std::endl;
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int> vec2{10, 20, 30, 40, 50};

    display(vec1); // [ 1 2 3 4 5 ]
    display(vec2); // [ 10 20 30 40 50 ]
    std::cout << std::endl;

    vec2.swap(vec1);
    display(vec1); // [ 10 20 30 40 50 ]
    display(vec2); // [ 1 2 3 4 5 ]
}

void test8() // sort, reverse sort
{
    std::cout << "---Test8-----------------" << std::endl;
    std::vector<int> vec1{1, 21, 3, 40, 12};
    display(vec1);
    std::sort(vec1.begin(), vec1.end());
    display(vec1);

    std::vector<int> vec2{vec1};
    display(vec2); // [ 1 3 12 21 40 ]
    std::sort(vec2.rbegin(), vec2.rend());
    display(vec2); // [ 40 21 12 3 1 ]
}

void test9() // copy, back_inserter, copy_if
{
    std::cout << "---Test9-----------------" << std::endl;
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int> vec2{10, 20};

    display(vec1); // [ 1 2 3 4 5 ]
    display(vec2); // [ 10 20 ]
    std::cout << std::endl;

    std::copy(vec1.begin(), vec1.end(), std::back_inserter(vec2));
    display(vec1); // [ 1 2 3 4 5 ]
    display(vec2); // [ 10 20 1 2 3 4 5 ]
    std::cout << std::endl;

    // Copy if element is even

    vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vec2 = {10, 20};

    display(vec1); // [ 1 2 3 4 5 6 7 8 9 10 ]
    display(vec2); // [ 10 20 ]

    std::copy_if(vec1.begin(), vec1.end(), std::back_inserter(vec2), [](auto x)
                 { return (x % 2 == 0); });

    display(vec1); // [ 1 2 3 4 5 6 7 8 9 10 ]
    display(vec2); // [ 10 20 2 4 6 8 10 ]
}

void test10() // transform
{
    std::cout << "---Test10-----------------" << std::endl;
    // transform over 2 ranges
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int> vec2{10, 20, 30, 40, 50};
    std::vector<int> vec3;

    display(vec1); // [ 1 2 3 4 5 ]
    display(vec2); // [ 10 20 30 40 50 ]

    // 1*10, 2*20, 3*30, 4*40, 5*50 and store the results in vec3
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), std::back_inserter(vec3),
                   [](int x, int y)
                   { return x * y; });

    display(vec3); // [ 10 40 90 160 250 ]
}

void test11() // find, insert
{
    std::cout << "---Test11-----------------" << std::endl;
    std::vector<int> vec1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> vec2 {100, 200, 300, 400};

    display(vec1);
    display(vec2);

    std::cout << std::endl;

    auto it {std::find(vec1.begin(), vec1.end(), 5)};
    if (it != vec1.end())
    {
        std::cout << "Inserting..." << std::endl; // Inserting...
        vec1.insert(it, vec2.begin(), vec2.end());
    }
    else 
    {
        std::cout << "Sorry, 5 not found" << std::endl;
    }
    display(vec1); // [ 1 2 3 4 100 200 300 400 5 6 7 8 9 10 ]
}

