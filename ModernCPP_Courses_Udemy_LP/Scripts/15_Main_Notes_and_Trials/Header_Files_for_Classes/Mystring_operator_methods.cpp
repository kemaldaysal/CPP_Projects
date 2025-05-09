#include "Mystring_operator_methods.h"
#include <cstring>
#include <iostream>

// No args constructor
Mystring::Mystring()
    : str{nullptr}
{
    std::cout << "No args constructor is called" << std::endl;

    str = new char[1];
    *str = '\0'; // a single character with a null terminator
}

// Overloaded constructor
Mystring::Mystring(const char *s)
    : str{nullptr}
{
    std::cout << "Overloaded constructor is called for: " << s << std::endl;

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
    std::cout << "Copy 'constructor' is called for source: " << source.str << std::endl;
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

// Copy assignment operator

Mystring &Mystring::operator=(const Mystring &rhs) // Copy assignment.
{
    std::cout << "Copy assignment called for source: " << rhs.str << std::endl;
    if (this == &rhs)
    {
        return *this; // dereference "this" pointer to return the object
    }

    delete[] this->str;

    str = new char[std::strlen(rhs.str) + 1];

    std::strcpy(this->str, rhs.str);
    // strcpy copies one char at a time until it hits the terminating char \0

    return *this; // return the object we copied into, the left hand side
}

// Move constructor
Mystring::Mystring(Mystring &&source) noexcept
    : str(source.str)
{
    std::cout << "Move 'constructor' is called to move source: " << source.str << std::endl;
    source.str = nullptr;
}

// Move assignment operator
Mystring &Mystring::operator=(Mystring &&rhs)
{
    std::cout << "Move 'assignment' is called to move source: " << rhs.str << " to target: " << str << std::endl;

    if (this == &rhs)
    {
        return *this;
    }

    delete[] this->str;

    this->str = rhs.str;

    rhs.str = nullptr;

    return *this;
}

// Overloaded equality operator
bool Mystring::operator==(const Mystring &rhs) const
{
    return (std::strcmp(str, rhs.str) == 0); 
    // if same, inner function returns 0, so we'll check if it's 0 then return 1.
}

// Overloaded lowercase operator

Mystring Mystring::operator-() const
{
    char* buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);

    for (size_t i {}; i < std::strlen(buff) ; i++)
    {
        buff[i] = std::tolower(buff[i]);
    }

    Mystring temp {buff};
    delete [] buff;

    return temp;
}

// Overloaded concatenation operator

Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *buff = new char [strlen(str) + strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);

    
    Mystring temp {buff};
    delete [] buff;

    return temp;
}


// Destructor
Mystring::~Mystring()
{
    if (str == nullptr)
    {
        std::cout << "Calling destructor for Mystring : nullptr" << std::endl;
    }
    else
    {
        std::cout << "Calling destructor for Mystring : " << str << std::endl;
    }
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