// In this assignment, you will display a Letter Pyramid given a string of characters. 
// This assignment will allow you to practice using loops, nested loops, and std::string 
// Please see the assignment instructions for details. Note that the assignment will not be graded, but is provided for practice.


// Improved answer

#include <iostream>
#include <string>

using namespace std;

int main (void)
{

    // string input_str {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"}; // For quick debugging
    string input_str{};

    cout << "Enter a string to draw a pyramid: ";
    getline(cin, input_str);

    size_t length_str = input_str.length();
    
    const size_t total_digits {(length_str*2) - 1}; // ((string.length*2) - 1)
    size_t iterator_tracker {};

    for (size_t i {0}; i < length_str; i++)
    {
        size_t chars_in_this_line {((i*2)+1)};
        size_t spaces_at_one_side_in_this_line {(total_digits - chars_in_this_line)/2};

        for (size_t sp1 {}; sp1 < spaces_at_one_side_in_this_line; sp1++) // for first space
        {
            cout << " ";
        }

        for (size_t j {0}; j <= i; j++) // forward string
        {            
            cout << input_str.at(j);
            iterator_tracker = j;            
        }

        for (size_t k {iterator_tracker}; k > 0; k--) // backwards string
        {
            cout << input_str.at(k-1);
        }

        for (size_t sp1 {}; sp1 < spaces_at_one_side_in_this_line; sp1++) // for last space
        {
            cout << " ";
        }        

        cout << endl;
    }
    return 0;
}

/* // Applied answer

#include <iostream>
#include <string>

using namespace std;

int main (void)
{

    // string input_str {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"}; // For quick debugging
    string input_str{};

    cout << "Enter a string to draw a pyramid: ";
    cin >> input_str;
    
    const size_t total_digits {(input_str.length()*2) - 1}; // ((string.length*2) - 1)
    size_t iterator_tracker {};

    for (size_t i {0}; i < input_str.length(); i++)
    {
        size_t chars_in_this_line {((i*2)+1)};
        size_t spaces_at_one_side_in_this_line {(total_digits - chars_in_this_line)/2};

        for (size_t sp1 {}; sp1 < spaces_at_one_side_in_this_line; sp1++) // for first space
        {
            cout << " ";
        }

        for (size_t j {0}; j <= i; j++) // forward string
        {            
            cout << input_str.at(j);
            iterator_tracker = j;            
        }

        for (size_t k {iterator_tracker}; k > 0; k--) // backwards string
        {
            cout << input_str.at(k-1);
        }

        for (size_t sp1 {}; sp1 < spaces_at_one_side_in_this_line; sp1++) // for last space
        {
            cout << " ";
        }        

        cout << endl;
    }
    return 0;
}

*/

/* // Example Answer

// Letter Pyramid
// Written by Frank J. Mitropoulos

#include <iostream>
#include <string>

int main()
{
    std::string letters{};

    std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
    getline(std::cin, letters);

    size_t num_letters = letters.length();

    int position {0};

    // for each letter in the string
    for (char c: letters) {

        size_t num_spaces = num_letters - position;
        while (num_spaces > 0) {
            std::cout << " ";
            --num_spaces;
        }

        // Display in order up to the current character
        for (size_t j=0; j < position; j++) {
            std::cout << letters.at(j);
        }

        // Display the current 'center' character
        std::cout << c;

        // Display the remaining characters in reverse order
        for (int j=position-1; j >=0; --j) {
            // You can use this line to get rid of the size_t vs int warning if you want
            auto k = static_cast<size_t>(j);
            std::cout << letters.at(k);
        }

        std::cout << std::endl; // Don't forget the end line
        ++position;
    }

    return 0;
}










*/