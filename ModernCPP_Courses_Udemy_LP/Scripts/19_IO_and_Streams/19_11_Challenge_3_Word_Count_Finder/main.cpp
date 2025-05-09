#include <iostream>
#include <fstream>

bool isWordHere(const std::string &current_word, const std::string &target_word);

int main(void)
{
    std::ifstream file{};
    const std::string filename{"romeoandjuliet.txt"};
    std::string target_word{};
    std::string current_word {};
    size_t counter{};
    // size_t temp_counter{};
    size_t scanned_word_counter {};

    file.open(filename);
    if (!file)
    {
        std::cout << "Couldn't open the file!!" << std::endl;
        return 1;
    }

    std::cout << "Enter a target word: ";
    std::cin >> target_word;

    // Basic way but misses some words
    // while (file >> current_word)
    // {
    //     for (size_t i {}; i < current_word.length(); i++)
    //     {
    //         if (current_word[i] != target_word[i])
    //         {
    //             temp_counter = 0;
    //             break;
    //         }
    //         ++temp_counter;

    //         if (temp_counter == target_word.length())
    //         {
    //             ++counter;
    //             temp_counter = 0;
    //             break;
    //         }
    //     }
    //     ++scanned_word_counter;
    // }

    // Modern C++ version

    while (file >> current_word)
    {
        if (isWordHere(current_word, target_word))
        {
            ++counter;
        }
        ++scanned_word_counter;
    }

    std::cout << target_word << " word is found " << counter << "/" << scanned_word_counter << " in " << filename << std::endl;

    file.close();
    return 0;
}

bool isWordHere(const std::string &current_word, const std::string &target_word)
{
    if (current_word.find(target_word) != std::string::npos)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}