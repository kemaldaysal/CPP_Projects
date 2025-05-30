// Section 20
// Challenge 3
// Maps and Sets

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <string>
#include <iomanip>

void display_words(const std::map<std::string, size_t> &words);
void display_words(const std::map<std::string, std::set<int>> &words);
std::string clean_string(const std::string &s);
void part1();
void part2();

int main()
{
    part1();
    part2();
    return 0;
}

// Used for Part1
// Display the word and count from the
// std::map<std::string, int>

void display_words(const std::map<std::string, size_t> &words)
{
    std::cout << std::setw(12) << std::left << "\nWord"
              << std::setw(7) << std::right << "Count" << std::endl;
    std::cout << "===================" << std::endl;
    for (auto pair : words)
        std::cout << std::setw(12) << std::left << pair.first
                  << std::setw(7) << std::right << pair.second << std::endl;
}

// Used for Part2
// Display the word and occurences from the
// std::map<std::string, std::set<int>>

void display_words(const std::map<std::string, std::set<size_t>> &words)
{
    std::cout << std::setw(12) << std::left << "\nWord"
              << "Occurrences" << std::endl;
    std::cout << "=====================================================================" << std::endl;
    for (auto pair : words)
    {
        std::cout << std::setw(12) << std::left << pair.first
                  << std::left << "[ ";
        for (auto i : pair.second)
            std::cout << i << " ";
        std::cout << "]" << std::endl;
    }
}

// This function removes periods, commas, semicolons and colon in
// a string and returns the clean version
std::string clean_string(const std::string &s)
{
    std::string result;
    for (char c : s)
    {
        if (c == '.' || c == ',' || c == ';' || c == ':')
            continue;
        else
            result += c;
    }
    return result;
}

// Part1 process the file and builds a map of words and the
// number of times they occur in the file

void part1()
{
    std::map<std::string, size_t> words;
    std::string word;
    std::ifstream in_file{"words.txt"};
    if (in_file)
    {
        while (in_file >> word)
        {
            word = clean_string(word);
            
            /* // v1 - Longer version by me
            words.insert(std::make_pair(word, 0));

            auto it{words.find(word)};

            if (it != words.end())
            {
                (it->second)++;
            }
            */

            // v2 - Cleaner and simpler version
            words[word]++;
        }
        // You implement this code

        in_file.close();
        display_words(words);
    }
    else
    {
        std::cerr << "Error opening input file" << std::endl;
    }
}

// Part2 process the file and builds a map of words and a
// set of line numbers in which the word appears
void part2()
{
    std::map<std::string, std::set<size_t>> words;
    std::string line;
    std::string word;
    std::ifstream in_file{"words.txt"};
    if (in_file)
    {
        std::size_t line_number{0};
        while (std::getline(in_file, line))
        {
            line_number++;
            std::istringstream ss{line};
            while (ss >> word)
            {
                word = clean_string(word);
                /*// v1 - Longer first version by me 
                std::set<size_t> line_counts{line_count};

                words.insert(std::make_pair(word, line_counts));

                auto it{words.find(word)};

                if (it != words.end())
                {
                    it->second.insert(line_count);
                }
                */

                // v2 - Shorter and smarter version
                words[word].insert(line_number);
            }
        }

        // You implement this code

        in_file.close();
        display_words(words);
    }
    else
    {
        std::cerr << "Error opening input file" << std::endl;
    }
}
