#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file {"poem.txt"};
    // std::ofstream out_file {"output.txt", std::ios::app};
    std::ofstream out_file {"output.txt"};

    std::string line {};

    if (!in_file)
    {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }

    if (!out_file)
    {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }

    while (std::getline(in_file, line))
    {
        out_file << line << std::endl;
    }

    in_file.close();
    out_file.close();
    return 0;
}