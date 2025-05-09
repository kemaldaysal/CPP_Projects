#include <iostream>

class Exception_DivideByZero {};
class Exception_NegativeValue {};

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
    catch (const Exception_DivideByZero &exc_code)
    {
        std::cerr << "Sorry, dividing by 0 is prohibited" << std::endl;
    }
    catch (const Exception_NegativeValue &exc_code)
    {
        std::cerr << "Sorry, negative inputs aren't allowed" << std::endl;
    }

    std::cout << "Program ended succesfully" << std::endl;
    return 0;
}

double calculate_kpl(int kilometers, int liters)
{
    if (liters == 0)
        throw Exception_DivideByZero();

    else if (liters < 0 || kilometers < 0)
        throw Exception_NegativeValue();

    return ((static_cast<double>(kilometers)) / liters);
}