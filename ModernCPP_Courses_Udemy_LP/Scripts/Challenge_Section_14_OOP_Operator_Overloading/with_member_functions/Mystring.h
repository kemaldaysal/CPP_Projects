#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
#include <cstring>

class Mystring
{

    friend std::ostream &operator<<(std::ostream &os, const Mystring &source);
    friend std::istream &operator>>(std::istream &is, Mystring &source);

private:
    char *str;
    static bool debug_logs_enabled;

public:
    Mystring();              // no-args constructor
    Mystring(const char *s); // main constructor

    Mystring(const Mystring &source);            // copy constructor
    Mystring &operator=(const Mystring &source); // copy assignment

    Mystring(Mystring &&source) noexcept;   // move constructor
    Mystring &operator=(Mystring &&source); // move assignment

    ~Mystring(); // destructor

    // getters

    void display(void) const;
    int get_length(void) const;
    const char *get_str(void) const;

    // Overloaded custom operators for challenge
    bool operator==(const Mystring &obj_2) const; // equality comparator
    Mystring operator--() const;                  // convert to undercase letters
    Mystring operator++() const;                  // convert to uppercase letters

    bool operator<(const Mystring &rhs) const; // returns true if the string is lexically greater than the rhs string
    bool operator>(const Mystring &rhs) const;
    Mystring operator+(const Mystring &rhs) const; // concatenation

    Mystring &operator+=(const Mystring &rhs); // concatenate rhs string to lhs string and store the result in lhs object

    Mystring operator*(const size_t repeat_count) const; // s2 * 3; repeat - results in a string that is copied n times
    //          ex) s2 = "abc";
    //              s1 = s2 * 3;
    //              s1 will result in "abcabcabc"

    Mystring &operator*=(const size_t repeat_count);
    // repeat the string on lhs n times and store the result back in the lhs object
    // s1 = "abc";
    // s1 *= 4; -> s1 = s1 will result in "abcabcabcabc"
};
#endif