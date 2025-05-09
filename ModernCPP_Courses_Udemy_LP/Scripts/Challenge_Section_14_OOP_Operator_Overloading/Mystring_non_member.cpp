#include "Mystring_non_member.h"

bool Mystring::debug_logs_enabled{0};

Mystring::Mystring()
    : str{nullptr}
{
    if (debug_logs_enabled)
        std::cout << "--No args constructor is called" << std::endl;

    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s)
    : str{nullptr}
{
    if (debug_logs_enabled)
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

Mystring::Mystring(const Mystring &source) // copy constructor
    : str{nullptr}
{
    if (debug_logs_enabled)
        std::cout << "--Copy 'constructor' is called for source: " << source.str << std::endl;

    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

Mystring::Mystring(Mystring &&source) noexcept // move constructor
    : str{source.str}
{
    if (debug_logs_enabled)
        std::cout << "--Move 'constructor' is called to move source: " << source.str << std::endl;
    source.str = nullptr;
}

Mystring &Mystring::operator=(const Mystring &source) // copy assignment operator
{
    if (debug_logs_enabled)
        std::cout << "--Copy assignment called for source: " << source.str << std::endl;

    if (this == &source)
    {
        return *this;
    }

    delete[] str;

    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);

    return *this;
}

Mystring &Mystring::operator=(Mystring &&source) // move assignment operator
{
    if (debug_logs_enabled)
        std::cout << "--Move 'assignment' is called to move source: " << source.str << " to target: " << str << std::endl;

    if (this == &source)
    {
        return *this;
    }

    delete[] str;

    str = source.str;
    source.str = nullptr;

    return *this;
}

Mystring::~Mystring()
{
    if (debug_logs_enabled)
    {
        if (str == nullptr)
        {
            std::cout << "--Calling destructor for Mystring : nullptr" << std::endl;
        }
        else
        {
            std::cout << "--Calling destructor for Mystring : " << str << std::endl;
        }
    }

    delete[] str;
}

void Mystring::display(void) const
{
    std::cout << get_str() << ", length: " << get_length() << std::endl;
}
int Mystring::get_length(void) const
{
    return (std::strlen(str));
}
const char *Mystring::get_str(void) const
{
    return str;
}

// Overloaded iostream operators as friend functions

std::ostream &operator<<(std::ostream &os, const Mystring &obj)
{
    os << obj.str;
    return os;
}
std::istream &operator>>(std::istream &is, Mystring &obj)
{
    char *buff = new char[1000];
    std::strcpy(buff, obj.str);

    is >> buff;
    obj = Mystring{buff}; // this'll use the efficient move assignment operator

    delete[] buff;

    return is;
}

// Overloaded custom operators for challenge

// equality comparator
bool operator==(const Mystring &obj_1, const Mystring &obj_2)
{
    return !(std::strcmp(obj_1.str, obj_2.str));
}

// convert to undercase letters
Mystring operator--(const Mystring &obj)
{
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);

    for (size_t i{}; i < std::strlen(buff); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }

    Mystring temp{buff};
    delete[] buff;
    return temp;
}

Mystring operator++(const Mystring &obj) // convert to uppercase letters
{
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);

    for (size_t i{}; i < std::strlen(buff); i++)
    {
        buff[i] = std::toupper(buff[i]);
    }

    Mystring temp{buff};
    delete[] buff;
    return temp;
}

bool operator<(const Mystring &lhs, const Mystring &rhs) // returns true if the current object's string is lexically smaller than the rhs string
{
    /* std::strcmp returns
        Negative value if lhs appears before rhs in lexicographical order.
        Zero if lhs and rhs compare equal.
        Positive value if lhs appears after rhs in lexicographical order.
    */

    return (std::strcmp(lhs.str, rhs.str) < 0);
}

bool operator>(const Mystring &lhs, const Mystring &rhs) // returns true if the current object's string is lexically larger than the rhs string
{
    /* std::strcmp returns
      Negative value if lhs appears before rhs in lexicographical order.
      Zero if lhs and rhs compare equal.
      Positive value if lhs appears after rhs in lexicographical order.
    */

    return (std::strcmp(lhs.str, rhs.str) > 0);
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);

    Mystring temp{buff};
    delete[] buff;
    return temp;
}

Mystring &operator+=(Mystring &lhs, const Mystring &rhs) // concatenate rhs string to lhs string and store the result in lhs object
{

    /* // The longer way
    char* buff = new char [strlen(lhs.str) + strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);

    lhs = Mystring{buff};
    delete [] buff;

    return lhs;
    */

    // The optimized delegated way by using + above
    lhs = lhs + rhs;
    return lhs;
}

Mystring operator*(const Mystring &lhs, const size_t repeat_count)
{
    /* // First try by me


    char *buff = new char[((std::strlen(rhs.str))*repeat_count) + 1];

    std::strcpy(buff, rhs.str);

    for (size_t i{}; i < (repeat_count - 1); i++)
    {
        std::strcat(buff, rhs.str);
    }

    Mystring s1{buff};
    delete[] buff;
    return s1;
    */

    // 2nd try with recursive concatenation

    Mystring temp;
    for (size_t i{}; i < repeat_count; i++)
    {
        temp = temp + lhs;
    }
    return temp;
}

Mystring &operator*=(Mystring &lhs, const size_t repeat_count)
{
    /* // The longer way

    char *buff = new char[(std::strlen(lhs.str) * repeat_count) + 1];
    std::strcpy(buff, lhs.str);

    for (size_t i{}; i < (repeat_count - 1); i++)
    {
        std::strcat(buff, lhs.str);
    }

    lhs = Mystring{buff};
    delete[] buff;
    return lhs;
    */

    // The optimized delegated way by using + above

    lhs = lhs * repeat_count;
    return lhs;
}