#include <iostream>

double calculate_kpl(int kilometers, int liters); // func. prot.

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
        kilometers_per_liters = calculate_kpl(kilometers, liters);
        std::cout << "Result: " << kilometers_per_liters << std::endl;
    }
    catch (int &exc_code)
    {
        std::cerr << "Sorry, dividing by 0 is prohibited" << std::endl;
    }
    catch (std::string &exc_code)
    {
        std::cerr << exc_code << std::endl;
    }
    // catch (...)
    // {
    //     std::cerr << "All purpose catcher is here to save you from unknown!!" << std::endl;
    // }

    std::cout << "Program ended succesfully" << std::endl;
    return 0;
}

double calculate_kpl(int kilometers, int liters)
{
    if (liters == 0)
        throw 0;

    else if (liters < 0 || kilometers < 0)
        throw std::string{"Sorry, can't use negative inputs"};

    return ((static_cast<double>(kilometers)) / liters);
}