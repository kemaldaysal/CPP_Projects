// Section 18
// Kilometers per Liters - No Exception Handling

#include <iostream>

int main()
{
    int kilometers {};
    int liters {};
    double kilometers_per_liters{};

    std::cout << "Enter the kilometers: ";
    std::cin >> kilometers; // 25 

    std::cout << "Enter the liters: ";
    std::cin >> liters; // 0

    // kilometers_per_liters = kilometers / liters; // Integer divided by 0
    
    if (liters > 0)
    {
        kilometers_per_liters = (static_cast<double>(kilometers)) / liters; // Floating point number divided by 0
        std::cout << "Result: " << kilometers_per_liters << std::endl;
    }
    else if (liters == 0)
    {
        std::cerr << "Sorry, can't divide by 0" << std::endl;
    } 
    else if (liters < 0 || kilometers < 0)
    {
        std::cerr << "Sorry, negative input isn't allowed" << std::endl;
    }

    std::cout << "Program ended succesfully" << std::endl; 
    return 0;
}