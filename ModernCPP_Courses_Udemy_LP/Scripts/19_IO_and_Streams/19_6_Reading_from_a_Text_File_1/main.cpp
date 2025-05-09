// Section 19
// Read File 1
// Test for file open and simple read of 3 data items

#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file {};
    std::string line {};
    int num {};
    double total {};

    in_file.open("test.txt"); // file name is system and IDE specific

    /* Both of these work as expected
    
    Hello
    123
    200.345

    or 

    Hello 123 200.345
    */

    if (!in_file)
    {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }

    in_file >> line >> num >> total;
    std::cout << "Stored string: " << line << std::endl; // Stored string: Hello
    std::cout << "Stored int: " << num << std::endl; // Stored int: 123
    std::cout << "Stored double: " << total << std::endl; // Stored double: 200.345

    in_file.close();

    return 0;
}