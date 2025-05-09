#include <iostream>
#include <vector>
#include <algorithm>

#include "Person.h"
#include "Lambda.h"
#include "People.h"

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

int global_x{1000};

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

    std::cout << "\n";
    return 0;
}

// Capture by value
// The global variable global_x cannot be captured because it is not
// within the reaching scope of the lambda. It can however still be accessed
// from within the lambda using normal name lookup rules.
void test1()
{
    std::cout << "\n---Test1 --------------------------" << std::endl;

    int local_x{100};

    auto l = [local_x]()
    {
        std::cout << local_x << std::endl;  // 100
        std::cout << global_x << std::endl; // 1000
        // It can still be accessed from within the lambda using normal name lookup rules.
    };
    l();
}

// Capture by value - mutable
// The captured variable x can only be modified within the lambda by
// using the mutable keyword. Note that this modifiability only pertains to
// the captured variable within the lambda body and not the actual variable.
void test2()
{
    std::cout << "\n---Test2 --------------------------" << std::endl;

    int x{100};

    auto l = [x]() mutable
    {
        x += 100;
        std::cout << x << std::endl;
    };

    l();                         // 200
    std::cout << x << std::endl; // 100

    l();                         // 300 !!! like a static variable !! doesn't capture x again !! only captures once !!
                                 // Since captured value is a member variable of object created by lambda!!
    std::cout << x << std::endl; // 100
}

// Capture by reference
// Any changes made to the captured reference variable within the lambda body
// will change the actual variable.
// "mutable" isn't needed for capture by reference
void test3()
{
    std::cout << "\n---Test3 --------------------------" << std::endl;

    int x{100};

    auto l = [&x]()
    {
        x += 100;
        std::cout << x << std::endl;
    };

    l();                         // 200
    std::cout << x << std::endl; // 200, changes carried since it's a reference
    l();                         // 300
    std::cout << x << std::endl; // 300
}

// Default capture by value - mutable
// Only variables used within the lambda body are captured by value.
// The variable z is not captured by the lambda.
void test4()
{
    std::cout << "\n---Test4 --------------------------" << std::endl;

    int x{100}; // this'll be captured and COPIED into lambda
    int y{200}; // this'll be captured and COPIED into lambda
    int z{300}; // z is not captured in the lambda since it is not used.
                // This should produce an 'unused variable' warning when compiling.

    auto l = [=]() mutable
    {
        x += 100;
        y += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    };
    l(); // x: 200 y: 300
    l(); // x: 300 y: 400

    std::cout << "\n";
    std::cout << x << std::endl; // 100 // doesn't change - capture by value
    std::cout << y << std::endl; // 200 // doesn't change - capture by value
}

// Default capture by reference
// This time because all three variables - x,y,z are used within
// the lambda body, all three of them will be captured by reference.
void test5()
{
    std::cout << "\n---Test5 --------------------------" << std::endl;

    int x{100};
    int y{200};
    int z{300};

    auto l = [&]()
    {
        x += 100;
        y += 100;
        z += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };
    l(); // x: 200 y: 300 z: 400

    std::cout << "\n";
    std::cout << x << std::endl; // 200
    std::cout << y << std::endl; // 300
    std::cout << z << std::endl; // 400
}

// Default capture by value, capture y by reference
// "mutable" keyword is only needed for variables except y,
// which are x and z since they're copied
void test6()
{
    std::cout << "\n---Test6 --------------------------" << std::endl;

    int x{100};
    int y{200};
    int z{300};

    auto l = [=, &y]() mutable
    {
        x += 100;
        y += 100;
        z += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };
    l(); // x: 200 y: 300 z: 400

    std::cout << "\n";
    std::cout << x << std::endl; // 100 // capture by value
    std::cout << y << std::endl; // 300 // capture by reference
    std::cout << z << std::endl; // 300 // capture by value
}

// Default capture by reference, capture x and z by value
// Equivalent to test6
void test7()
{
    std::cout << "\n---Test7 --------------------------" << std::endl;

    int x{100};
    int y{200};
    int z{300};

    auto l = [&, x, z]() mutable
    {
        x += 100;
        y += 100;
        z += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };
    l(); // x: 200 y: 300 z: 400

    std::cout << "\n";
    std::cout << x << std::endl; // 100
    std::cout << y << std::endl; // 300 // c
    std::cout << z << std::endl; // 300
}

// Default capture by reference of the current object using [this]
// [=], [&], and [this] are equivalent when capturing an object's member variables - all are captured by reference
// Notre that capturing this with [=] has been deprecated in C++20
// Also, C++20 allows [*this], which captures by value!
void test8()
{
    std::cout << "\n---Test8 --------------------------" << std::endl;

    Person person("Larry", 18);
    std::cout << person << std::endl; // [Person: Larry : 18]

    // Default capture [this]
    // This is the preferred way
    auto change_person1 = person.change_person1(); // returns lambda
    change_person1("Moe", 30);
    std::cout << person << std::endl; // [Person: Moe : 30]

    // Default capture [=]
    // This has been deprecated in C++20
    auto change_person2 = person.change_person2();
    change_person2("Curly", 25);
    std::cout << person << std::endl; // [Person: Curly : 25]

    // Default capture [&]
    auto change_person3 = person.change_person3();
    change_person3("Frank", 34);
    std::cout << person << std::endl; // [Person: Frank : 34]
}

// Lambda class equivalence example
void test9()
{
    std::cout << "\n---Test9 --------------------------" << std::endl;

    int y{100};

    Lambda lambda1(y); // longer way including class declaration
    auto lambda2 = [y](int x)
    { std::cout << x + y << std::endl; }; // shorter way using lambda

    lambda1(200); // 300
    lambda2(200); // 300
}

void test10()
{
    std::cout << "\n---Test10 --------------------------" << std::endl;

    People friends;
    friends.add("Larry", 18);
    friends.add("Curly", 25);
    friends.add("Moe", 35);
    friends.add("Frank", 28);
    friends.add("James", 65);

    auto result = friends.get_people(17);

    std::cout << std::endl;
    for (const auto &p : result)
        std::cout << p << std::endl;

    /*
    [Person: Larry : 18]
    [Person: Curly : 25]
    [Person: Moe : 35]
    [Person: Frank : 28]
    [Person: James : 65]
    */

    friends.set_max_people(3);

    result = friends.get_people(17);

    std::cout << std::endl;
    for (const auto &p : result)
        std::cout << p << std::endl;
    /*
    [Person: Larry : 18]
    [Person: Curly : 25]
    [Person: Moe : 35]
    */

    result = friends.get_people(50);

    std::cout << std::endl;
    for (const auto &p : result)
        std::cout << p << std::endl;

    // [Person: James : 65]
}