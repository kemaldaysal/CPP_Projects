// Section 20
// List
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator> // for std::advance

#include "Person.h"
#include "Template_Functions.h"

void test1();
void test2();
void test3();
void test4();
void test5();
void test6();

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    std::cout << std::endl;
    return 0;
}

void test1() // declaration & initialization, push_back, push_front
{
    std::cout << "\nTest1 =========================" << std::endl;

    std::list<int> l1{1, 2, 3, 4, 5};
    display(l1); // [ 1 2 3 4 5 ]

    std::list<std::string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2); // [ Front Back ]

    std::list<int> l3;
    l3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l3); // [ 1 2 3 4 5 6 7 8 9 10 ]

    std::list<int> l4(10, 100);
    display(l4); // 10 x 100s
}

void test2() // size, front, back, clear
{
    std::cout << "\nTest2 =========================" << std::endl;

    std::list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l);                                     // [ 1 2 3 4 5 6 7 8 9 10 ]
    std::cout << "Size: " << l.size() << std::endl; // 10

    std::cout << "Front : " << l.front() << std::endl; // 1
    std::cout << "Back  : " << l.back() << std::endl;  // 10

    l.clear();
    display(l);                                     // [ ]
    std::cout << "Size: " << l.size() << std::endl; // 0
}

void test3() // resize (primitive obj vs class obj)
{
    std::cout << "\nTest3 =========================" << std::endl;

    std::list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l); // [ 1 2 3 4 5 6 7 8 9 10 ]

    l.resize(5);
    display(l); // [ 1 2 3 4 5 ]

    l.resize(10);
    display(l); // [ 1 2 3 4 5 0 0 0 0 0 ]

    std::list<Person> persons;
    persons.resize(5); // uses the Person default constructor
    display(persons);  // [ Unknown: 0 Unknown: 0 Unknown: 0 Unknown: 0 Unknown: 0 ]
}

void test4() // insert, advance, erase
{
    std::cout << "\nTest4 =========================" << std::endl;

    std::list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l); // [ 1 2 3 4 5 6 7 8 9 10 ]
    auto it = std::find(l.begin(), l.end(), 5);
    if (it != l.end())
    {
        l.insert(it, 100); // insert BEFORE iterator
    }
    display(l); // [ 1 2 3 4 100 5 6 7 8 9 10 ]

    std::list<int> l2{1000, 2000, 3000};
    l.insert(it, l2.begin(), l2.end()); // super efficient !!
    display(l);                         // [ 1 2 3 4 100 1000 2000 3000 5 6 7 8 9 10 ]

    std::advance(it, -4);          // point to the 100 -> 8-4 = 4th element
    std::cout << *it << std::endl; // 100

    l.erase(it); // remove the 100 - iterator becomes invalid
    display(l);  // [ 1 2 3 4 1000 2000 3000 5 6 7 8 9 10 ]
}

void test5() // emplace_back, emplace
{
    std::cout << "\nTest5 =========================" << std::endl;

    std::list<Person> stooges{
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}};

    display(stooges); // [ Larry: 18 Moe: 25 Curly: 17 ]
    std::string name;
    int age{};
    std::cout << "\nEnter the name of the next stooge: ";
    getline(std::cin, name);
    std::cout << "Enter their age: ";
    std::cin >> age;

    stooges.emplace_back(name, age);
    display(stooges); // [ Larry: 18 Moe: 25 Curly: 17 Kemal: 24 ]

    // Insert Frank before Moe
    auto it = std::find(stooges.begin(), stooges.end(), Person{"Moe", 25});
    if (it != stooges.end())
        stooges.emplace(it, "Frank", 18);
    display(stooges); // [ Larry: 18 Frank: 18 Moe: 25 Curly: 17 Kemal: 24 ]
}

void test6() // sort
{
    std::cout << "\nTest6 =========================" << std::endl;

    std::list<Person> stooges{
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}};

    display(stooges); // [ Larry: 18 Moe: 25 Curly: 17 ]
    stooges.sort();   // uses overloaded < operator by us (by age) !!
    display(stooges); // [ Curly: 17 Larry: 18 Moe: 25 ]
}
