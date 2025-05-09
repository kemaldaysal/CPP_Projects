#ifndef _MYSTRING_NON_MEMBER_H_
#define _MYSTRING_NON_MEMBER_H_

#include <iostream>
#include <cstring>

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &source);
    friend std::istream &operator>>(std::istream &is, Mystring &source);

    // Overloaded custom operators for challenge
    friend bool operator==(const Mystring &obj_1, const Mystring &obj_2); // equality comparator
    friend Mystring operator--(const Mystring &obj);                  // convert to undercase letters
    friend Mystring operator++(const Mystring &obj);                  // convert to uppercase letters

    friend bool operator<(const Mystring &lhs, const Mystring &rhs); // returns true if the string is lexically greater than the rhs string
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs); // concatenation

    friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs); // concatenate rhs string to lhs string and store the result in lhs object

    friend Mystring operator*(const Mystring &lhs, const size_t repeat_count); // s2 * 3; repeat - results in a string that is copied n times
    //          ex) s2 = "abc";
    //              s1 = s2 * 3;
    //              s1 will result in "abcabcabc"

    friend Mystring &operator*=(Mystring &lhs, const size_t repeat_count);
    // repeat the string on lhs n times and store the result back in the lhs object
    // s1 = "abc";
    // s1 *= 4; -> s1 = s1 will result in "abcabcabcabc"    

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
};
#endif