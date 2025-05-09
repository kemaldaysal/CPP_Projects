// Substitution Cipher

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{

    const string alphabet{"abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'.,!-_:;<>()"};
    const string cipher  {"ZYXWVUTSRQPONMLKJIHGFEDCBA<zyxwvutsrqponmlkjihgfedcba9876543210*_-:!;,.][}{"};
    string message{};

    cout << "Enter your secret message: ";
    getline(cin, message);

    // Encryption
    // Pseudo code of encryption:
    /*
        1) Loop through elements of original message
        2) Check every letter of the original message while looping
        3) Using .find, find that letter's index on the alphabet table
        4) Using .swap (maybe), swap that letter with the same index on cipher table
    */

    string encrypted_message {};
    bool encryption_error{0};

    for (char letter: message)
    {
        size_t index = alphabet.find(letter);
        if (index == string::npos)
        {
            cout << "Unknown alphabet-cipher element (" << letter << ") detected, quitting." << endl;
            encryption_error = 1;
            break;
        }
        // cout << "Index " << i << " is: " << index << endl; // For debugging
        encrypted_message += cipher.at(index);
    }

    if (!encryption_error)
    {
        cout << "-Your message is encrypted like below:" << endl;
        cout << encrypted_message << endl;

        // Decryption
        // Pseudo code of decryption:
        /*
            1) Loop through elements of encrypted message
            2) Check every letter of the encrypted message while looping
            3) Using .find, find that letter's index on the cipher table
            4) Assign that indexed alphabetic letter into decrypted message's i. element
        */

        string decrypted_message {};

        for (char c: encrypted_message)
        {
            size_t index = cipher.find(c);
            decrypted_message += alphabet[index];
        }

        cout << "-Here's your decrypted message below:" << endl;
        cout << decrypted_message << endl;
    }

    return 0;
}