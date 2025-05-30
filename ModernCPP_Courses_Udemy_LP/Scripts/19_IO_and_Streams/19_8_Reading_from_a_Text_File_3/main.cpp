// Section 19
// Read File 3
// Read and display Shakespeare Sonnet 18 poem using getline

#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("poem.txt"); // file name is system and IDE specific

    if (!in_file)
    {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }

    std::string line {};


    while(std::getline(in_file, line))
    {
        std::cout << line << std::endl;
    }

    in_file.close();
    return 0;
}