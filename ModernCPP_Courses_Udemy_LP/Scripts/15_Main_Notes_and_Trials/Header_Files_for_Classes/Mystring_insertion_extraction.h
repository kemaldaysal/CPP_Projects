#ifndef _MYSTRING_INSERTION_EXTRACTION_H_
#define _MYSTRING_INSERTION_EXTRACTION_H_

#include <iostream>
#include <cstring>

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring();                           // No args constructor
    Mystring(const char *s);              // Overloaded constructor
    Mystring(const Mystring &source);     // Copy constructor
    Mystring(Mystring &&source) noexcept; // Move constructor

    Mystring &operator=(const Mystring &rhs); // Copy assignment.
    Mystring &operator=(Mystring &&rhs);      // Move assignment

    ~Mystring(); // Destructor

    void display(void) const;
    int get_length(void) const; // getters
    const char *get_str(void) const;
};

#endif