#include <iostream>
#include <fstream>
#include <string>

int main()
{

    // std::ofstream output_file {"output.txt"}; // overwriting mode as default
    std::ofstream output_file {"output.txt", std::ios::app}; // append mode    
    if (!output_file)
    {
        std::cerr << "Error creating file" << std::endl;
        return 1;
    }

    std::string line;
    std::cout << "Enter something to write to the file: ";
    std::getline(std::cin, line);

    output_file << line << std::endl;
    
    output_file.close();

    return 0;
}