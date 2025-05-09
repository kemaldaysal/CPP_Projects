// Section 21
// Stateless lambda expressions
// [] - empty capture lists
#include <iostream>
#include <string>
#include <vector>
#include <functional> // for std::function
#include <algorithm>

#include "Person.h"

void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();
// void filter_vector(const std::vector<int> &vec, std::function<bool(int)> func);
void filter_vector(const std::vector<int> &vec, auto func); // C++20
auto make_lambda();

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();

    std::cout << std::endl;
    return 0;
}

void test1() // Basic syntax with basic pass-by-value parameters
{
    std::cout << "\n---Test1 --------------------------" << std::endl;

    []()
    { std::cout << "Hi" << std::endl; }(); // Hi

    // Very important to use () at the end.
    // It instantiates the lambda expression here.
    // Otherwise, it won't get executed.

    [](int x)
    { std::cout << x << std::endl; }(100);
    // Instantiate it with 100 and execute it here.

    // Passing parameters by value

    [](int x, int y)
    { std::cout << x + y << std::endl; }(100, 200);
}

// Using values and references as lambda parameters
void test2()
{
    std::cout << "\n---Test2 --------------------------" << std::endl;

    auto l1 = []()
    { std::cout << "Hi" << std::endl; };
    l1(); // Hi

    int num1{100};
    int num2{100};

    auto l2 = [](int x, int y)
    { std::cout << x + y << std::endl; };
    l2(10, 20);     // 30
    l2(num1, num2); // 200

    auto l3 = [](int &x, int y)
    {
        std::cout << "x: " << x << " y: " << y << std::endl; // x: 100, y: 100
        x = 1000;
        y = 2000;
    };

    l3(num1, num2);
    std::cout << "num1: " << num1 << " num2: " << num2 << std::endl;
    // x: 1000 (passed by reference and changed), y: 100 (passed by value, same)

    int t1{5};
    int t2{-5};

    std::cout << "t1: " << t1 << ", t2: " << t2 << std::endl; // t1: 5, t2: -5

    auto l4{[](int &x, int &y)
            {
                std::swap(x, y);
            }};

    l4(t1, t2);

    std::cout << "t1: " << t1 << ", t2: " << t2 << std::endl; // t1: -5, t2: 5
}

// Using value and reference objects as lambda parameters
void test3()
{
    std::cout << "\n---Test3 --------------------------" << std::endl;
    Person stooge{"Larry", 18};
    std::cout << stooge << std::endl; // [Person: Larry : 18]

    auto l4 = [](Person p) {         // pass by value
        std::cout << p << std::endl; // copy is only alive inside
    };
    l4(stooge); // [Person: Larry : 18]
    // Overridden copy constructor of class is called

    auto l5 = [](const Person &p) { // pass by reference
        std::cout << p << std::endl;
    };
    l5(stooge); // [Person: Larry : 18]

    auto l6 = [](Person &p)
    {
        p.set_name("Frank");
        p.set_age(25);
        std::cout << p << std::endl;
    };
    l6(stooge); // [Person: Frank : 25]

    std::cout << stooge << std::endl; // [Person: Frank : 25]
}

// used for test4
// Expects function object with an int parameter, returns bool
// using std::function as a parameter in C++14 and greater
// or
// auto as parameter type in C++20

/*
What does this func do? I have no idea. That's the real power here.
I could care less what is happening in that function.
All I know is that I'm a filter vector function and I get a function.
I'm calling that function. I don't care what it does.
The only thing that's important is that it expects an int and returns a bool.
*/

// void filter_vector(const std::vector<int> &vec, std::function<bool(int)> func) // predicate lambda // C++14
void filter_vector(const std::vector<int> &vec, auto func) // C++20
{
    // void filter_vector (const std::vector<int>  &vec, auto func) {
    std::cout << "[ ";
    for (int i : vec)
    {
        if (func(i))
            std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

// passing a lambda to a function
void test4()
{
    std::cout << "\n---Test4 --------------------------" << std::endl;
    std::vector<int> nums{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    filter_vector(nums, [](int x)
                  { return x > 50; });
    // [ 60 70 80 90 100 ]

    filter_vector(nums, [](int x)
                  { return x <= 30; });
    // [ 10 20 30 ]

    filter_vector(nums, [](int x)
                  { return x >= 30 && x <= 60; });
    // [ 30 40 50 60 ]
}

// used for test5
// It's just returning the lambda.
auto make_lambda()
{
    return []()
    { std::cout << "This lambda was made using the make_lambda function!" << std::endl; };
}

// returning a lambda from a function
void test5()
{
    std::cout << "\n---Test5 --------------------------" << std::endl;

    auto l5 = make_lambda(); // assigns the created & returned lambda to l5
    l5();                    // This lambda was made using the make_lambda function!
}

// using auto in the lambda parameter list
void test6()
{
    std::cout << "\n---Test6 --------------------------" << std::endl;
    auto l6 = [](auto x, auto y)
    {
        std::cout << "x: " << x << " y: " << y << std::endl;
    };

    l6(10, 20);      // x: 10 y: 20
    l6(100.3, 200);  // x: 100.3 y: 200
    l6(12.5, 15.54); // x: 12.5 y: 15.54

    l6(Person("Larry", 18), Person("Curly", 22));
    // x: [Person: Larry : 18] y: [Person: Curly : 22]
    // overloaded << is used
}

// Simple lambda examples with std::sort and std::for_each
void test7()
{
    std::cout << "\n---Test7 --------------------------" << std::endl;

    std::vector<Person> stooges{
        {"Larry", 18},
        {"Moe", 30},
        {"Curly", 25}};

    std::sort(begin(stooges), end(stooges), [](const Person &p1, const Person &p2)
              { return p1.get_name() < p2.get_name(); });

    // same way with usual syntax
    // std::sort(stooges.begin(), stooges.end(), [](const Person &p1, const Person &p2)
    //           { return p1.get_name() < p2.get_name(); });

    std::for_each(begin(stooges), end(stooges), [](const Person &p)
                  { std::cout << p << std::endl; });

    /*
    [Person: Curly : 25]
    [Person: Larry : 18]
    [Person: Moe : 30]
    */

    std::cout << std::endl;

    std::sort(begin(stooges), end(stooges), [](const Person &p1, const Person &p2)
              { return p1.get_age() < p2.get_age(); });

    std::for_each(begin(stooges), end(stooges), [](const Person &p)
                  { std::cout << p << std::endl; });

    /*
    [Person: Larry : 18]
    [Person: Curly : 25]
    [Person: Moe : 30]
    */
}