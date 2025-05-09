#include <iostream>

#include "Person.h"
#include "template_functions.h"

void test1();
void test2();
void test3();

int main()
{
    test1();
    test2();
    test3();
    return 0;
}

void test1() // declaration, initialization, insert, count, find (set's find), end, clear
{
    // Sets
    std::cout << "\nTest1 =========================" << std::endl;
    std::set<int> s1{1, 4, 3, 5, 2};
    display(s1); // [ 1 2 3 4 5 ]

    s1 = {1, 2, 3, 1, 1, 2, 2, 3, 3, 4, 5};
    display(s1); // [ 1 2 3 4 5 ] // duplicates are discarded

    s1.insert(0);
    s1.insert(10);

    display(s1); // [ 0 1 2 3 4 5 10]

    if (s1.count(10))
        std::cout << "10 is in the set" << std::endl; // 10 is in..
    else
        std::cout << "10 is NOT in the set" << std::endl;

    auto it = s1.find(5); 
    if (it != s1.end())
        std::cout << "Found: " << *it << std::endl; // Found: 5

    s1.clear();

    display(s1); // [ ]
}

void test2() // emplace, erase
{
    std::cout << "\nTest2 =========================" << std::endl;
    std::set<Person> stooges{
        {"Larry", 1},
        {"Moe", 2},
        {"Curly", 3}};
    display(stooges); // Age order because of overridden operator< by us 
    // [ Larry : 1 Moe : 2 Curly: 3 ]

    stooges.emplace("James", 50);
    display(stooges); // [ Larry: 1 Moe: 2 Curly: 3 James: 50 ]

    stooges.emplace("Frank", 50); // NO -- 50 already exists // VERY IMPORTANT uses overloaded operator< by age !!
    display(stooges); // [ Larry: 1 Moe: 2 Curly: 3 James: 50 ]

    auto it = stooges.find(Person{"Moe", 2});
    if (it != stooges.end())
        stooges.erase(it);

    display(stooges); // [ Larry: 1 Curly: 3 James: 50 ]

    it = stooges.find(Person("DOESNTMATTER", 50)); // Will remove James BY AGE!!!!
                                           // uses operator<
    if (it != stooges.end())
        stooges.erase(it);
    display(stooges); // [ Larry: 1 Curly: 3 ]
}

void test3() // insert's detailed outputs
{
    std::cout << "\nTest3 =========================" << std::endl;

    std::set<std::string> s{"A", "B", "C"};
    display(s); // [ A B C ]

    auto result = s.insert("D");
    display(s); // [ A B C D ] // ascii equivalent order ??

    std::cout << std::boolalpha;
    std::cout << "first: " << *(result.first) << std::endl; // first: D // alt 1: returned the iterator to the inserted element
    std::cout << "second: " << result.second << std::endl; // second: true // true if succesfully inserted

    std::cout << std::endl;

    result = s.insert("A");
    display(s); // [ A B C D ]

    std::cout << std::boolalpha;
    std::cout << "first: " << *(result.first) << std::endl; // first: A // alt 2: returned the iterator to the duplicated element in the set
    std::cout << "second: " << result.second << std::endl; // second: false // false if couldn't inserted
}