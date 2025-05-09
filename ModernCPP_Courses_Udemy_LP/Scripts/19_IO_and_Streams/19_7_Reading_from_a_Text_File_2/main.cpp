// Section 19
// Read File 2
// Continuous read of 3 data items in a loop

#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    std::ifstream in_file {};
    std::string line {};
    int num {};
    double total {};

    in_file.open("test.txt"); // file name is system and IDE specific

    if (!in_file)
    {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }

    // while (!(in_file.eof())) // v1
    while (in_file >> line >> num >> total) // v2 // if anyone of them fail, it'll give false
    {
        // in_file >> line >> num >> total; // v1
        std::cout << std::setw(10) << std::left << line
                  << std::setw(10) << num
                  << std::setw(10) << total
                  << std::endl;
    }

    in_file.close();
    return 0;
}