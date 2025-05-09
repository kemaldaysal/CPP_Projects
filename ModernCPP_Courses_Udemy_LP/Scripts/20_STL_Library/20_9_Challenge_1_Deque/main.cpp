// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome(const std::string &s)
{
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.

    std::deque<char> d;

    for (auto &c : s)
    {
        if (std::isalpha(c))
        {
            d.push_back(std::toupper(c));
        }
    }

    // for (size_t i{}; i < (d.size() / 2); i++)
    // {
    //     if (!((d.back() + i) == (d.front() + i)))
    //     {
    //         return false;
    //     }
    // }

    // Alternative and better way

    while (d.size() > 1)
    {
        if (!(d.front() == d.back()))
        {
            return false;
        }
        d.pop_back();
        d.pop_front();
    }
    return true;
}

int main()
{
    std::vector<std::string> test_strings{"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
                                          "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
                                          "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome"};

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for (const auto &s : test_strings)
    {
        std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}