#include "Mystring_copy_assignment.h"
#include <cstring>
#include <iostream>

// No args constructor
Mystring::Mystring()
    : str{nullptr}
{
    str = new char[1];
    *str = '\0'; // a single character with a null terminator
}

// Overloaded constructor
Mystring::Mystring(const char *s)
    : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr}
{
    std::cout << "Copy 'constructor' is called" << std::endl;
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

// Copy Assignment

Mystring &Mystring::operator=(const Mystring &rhs) // Copy assignment.
{
    std::cout << "Copy assignment called" << std::endl;
    if (this == &rhs)
    {
        return *this; // dereference "this" pointer to return the object
    }

    delete [] this->str;

    str = new char[std::strlen(rhs.str) + 1];

    std::strcpy(this->str, rhs.str);
    // strcpy copies one char at a time until it hits the terminating char \0

    return *this; // return the object we copied into, the left hand side

}

// Destructor
Mystring::~Mystring()
{
    delete[] str;
}

// just simply displays the c-style string
void Mystring::display(void) const
{
    std::cout << str << " : " << get_length() << std::endl;
}

int Mystring::get_length(void) const
{
    return std::strlen(str);
}

const char *Mystring::get_str(void) const
{
    return str;
}