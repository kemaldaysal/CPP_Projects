// Section 18
// Kilometers per Liters - No Exception Handling

#include <iostream>

int main()
{
    int kilometers{};
    int liters{};
    double kilometers_per_liters{};

    std::cout << "Enter the kilometers: ";
    std::cin >> kilometers; // 25

    std::cout << "Enter the liters: ";
    std::cin >> liters; // 0

    try
    {
        if (liters == 0)
        {
            throw 0; // if 0 is thrown, below code'll be skipped, we'll branch to catch part
        } 
        else if (liters < 0 || kilometers < 0)
        {
            throw 1; // if 1 is thrown, below code'll be skipped, we'll branch to catch part
        }
        kilometers_per_liters = (static_cast<double>(kilometers)) / liters; // Floating point number divided by 0
        std::cout << "Result: " << kilometers_per_liters << std::endl;
    }
    catch (int &ex_code)
    {
        if (ex_code == 0)
        {
            std::cerr << "Sorry, you can't divide by 0" << std::endl;
        }
        else if (ex_code == 1)
        {
            std::cerr << "Sorry, negative inputs aren't allowed" << std::endl;         
        }
    }

    std::cout << "Program ended succesfully" << std::endl;
    return 0;
}