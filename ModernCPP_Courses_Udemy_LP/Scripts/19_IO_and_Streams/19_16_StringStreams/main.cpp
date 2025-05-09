#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>

int main()
{
    int num {};
    double total {};
    std::string name {};

    std::string info {"Moe 100 1234.5"};
    std::istringstream iss {info};

    iss >> name >> num >> total;
    std::cout << std::setw(10) << std::left << name
              << std::setw(5) << num
              << std::setw(10) << total << std::endl;

    // Output: Moe       100  1234.5    

    std::cout << "\n--------------------------" << std::endl;

    std::ostringstream oss {};
    oss << std::setw(10) << std::left << name 
        << std::setw(5) << num
        << std::setw(10) << total << std::endl;

        // filling up the oss's buffer with above

    std::cout << oss.str() << std::endl;
    // Output: Moe       100  1234.5    

    std::cout << "\n-----Data Validation------" << std::endl;

    int value {};
    std::string entry{};
    bool done {false};

    do 
    {
        std::cout << "Please enter an integer: ";
        std::cin >> entry;
        std::istringstream validator {entry};
        if (validator >> value)
        {
            std::cout << "You've entered the integer: " << value << std::endl;
            done = true;
        }
        else 
        {
            std::cout << "Sorry, that's not an integer" << std::endl;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        // discards the remaining data in the input buffer until the \n, clears out the decimal parts if user entered a floating number

    } while(!done);

    // Accepts only integers and the integer parts of floats.
    // Won't accept strings
    return 0;
}