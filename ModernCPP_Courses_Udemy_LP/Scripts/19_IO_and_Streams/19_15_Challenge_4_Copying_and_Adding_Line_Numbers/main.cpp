#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    std::ifstream in_file {"romeoandjuliet.txt"};
    std::ofstream out_file {"output.txt"};

    std::string line {};
    size_t line_count {};

    if(!in_file)
    {
        std::cerr << "Error opening input file" << std::endl;
    }

    if(!out_file)
    {
        std::cerr << "Error opening output file" << std::endl;
    }    

    /*// the method where line numbers are also on blank lines
    while (getline(in_file, line))
    {
        ++line_count;
        out_file << std::setw(7) << std::left << line_count << line << std::endl;
    }
    */

    // the method where line numbers are only on valid lines
    while (getline(in_file, line))
    {
        if (line != "")
        {
            ++line_count;
            out_file << std::setw(7) << std::left << line_count << line << std::endl;
        }
        else 
        {
            out_file << std::endl;
        }
    }

    std::cout << "File copied" << std::endl;

    in_file.close();
    out_file.close();

    return 0;
}