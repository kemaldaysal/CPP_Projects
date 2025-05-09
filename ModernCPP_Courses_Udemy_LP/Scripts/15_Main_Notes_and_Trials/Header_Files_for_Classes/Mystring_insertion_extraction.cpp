#include "Mystring_insertion_extraction.h"

// No args constructor
Mystring::Mystring()
    : str{nullptr}
{
    std::cout << "--No args constructor is called" << std::endl;

    str = new char[1];
    *str = '\0'; // a single character with a null terminator
}

// Overloaded constructor
Mystring::Mystring(const char *s)
    : str{nullptr}
{
    std::cout << "--Overloaded constructor is called for: " << s << std::endl;

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
    std::cout << "--Copy 'constructor' is called for source: " << source.str << std::endl;
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

// Copy assignment operator

Mystring &Mystring::operator=(const Mystring &rhs) // Copy assignment.
{
    std::cout << "--Copy assignment called for source: " << rhs.str << std::endl;
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
    std::cout << "--Move 'constructor' is called to move source: " << source.str << std::endl;
    source.str = nullptr;
}

// Move assignment operator
Mystring &Mystring::operator=(Mystring &&rhs)
{
    std::cout << "--Move 'assignment' is called to move source: " << rhs.str << " to target: " << str << std::endl;

    if (this == &rhs)
    {
        return *this;
    }

    delete[] this->str;

    this->str = rhs.str;

    rhs.str = nullptr;

    return *this;
}

// Destructor
Mystring::~Mystring()
{
    if (str == nullptr)
    {
        std::cout << "--Calling destructor for Mystring : nullptr" << std::endl;
    }
    else
    {
        std::cout << "--Calling destructor for Mystring : " << str << std::endl;
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

//------------------------------------------|| Overloading the Stream Insertion and Extraction Operators
// Overloaded Insertion Operator

std::ostream &operator<<(std::ostream &os, const Mystring &rhs)
{
    os << rhs.str; // we used this since this method is a friend
    return os;
}

// Overloaded Extraction Operator (Gives error with > C++20)
std::istream &operator>>(std::istream &in, Mystring &rhs)
{
    char *buff = new char[1000]; // big enough buffer
    // in >> buff; // works with C++17, gives compiler error with > C++20 !! 
    rhs = Mystring{buff}; // this'll use the efficient move assignment operator
    delete[] buff;
    return in;
}
