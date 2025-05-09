// Section 20
// Function Templates
#include <iostream>
#include <string>

#include "templates.h"
#include "Person.h"

int main()
{
    std::cout << min<int>(2, 3) << std::endl;         // 2
    std::cout << min(2, 3) << std::endl;              // 2
    std::cout << min('A', 'B') << std::endl;          // A
    std::cout << min(12.5, 9.2) << std::endl;         // 9.2
    std::cout << min(5 + 2 * 2, 7 + 40) << std::endl; // 9

    Person p1{"Curly", 50};
    Person p2{"Moe", 30};

    Person p3 = min(p1, p2);
    std::cout << p3.name << " is younger" << std::endl; // Moe is younger

    func<int, int>(10, 25);           // 10 25
    func<int, float>(10, 25.5);       // 10 25.5
    func<int, int>(10, 25.5);         // 10 25
    func(10, 25);                     // 10 25
    func('A', 12.4);                  // A 12.4
    func(1000, "Testing");            // 1000 Testing
    func(2000, std::string("Frank")); // 2000 Frank

    func(p1,p2); // Curly Moe // Overloaded << function implemented for this


    int x {100};
    int y {200};
    std::cout << "Before swap, x: " << x << ", y: " << y << std::endl; // x: 100 y: 200
    swap(x,y);
    std::cout << "After swap, x: " << x << ", y: " << y << std::endl; // x: 200 y: 100

    std::cout << "Before swap, p1: " << p1 << ", p2: " << p2 << std::endl; // p1: Curly p2: Moe
    swap(p1, p2);
    std::cout << "After swap, p1: " << p1 << ", p2: " << p2 << std::endl; // p1: Moe p2: Curly 

    /*
    int a {50};
    float b {10.5};

    std::cout << "Before swap, a: " << a << ", b: " << b << std::endl; // a: 50 b: 10.5
    swap(a,b); // Error !! // Modifying the template function to take 2 parameters fixes this but removes decimal numbers. 
    std::cout << "Before swap, a: " << a << ", b: " << b << std::endl; // a: 10.5 b: 50
    */
   
    return 0;
}
