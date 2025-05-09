#ifndef _MYSTRING_OPERATOR_FUNCTIONS_NON_MEMBER_H_
#define _MYSTRING_OPERATOR_FUNCTIONS_NON_MEMBER_H_

class Mystring
{
    friend bool operator==(const Mystring &lhs, const Mystring &rhs); 
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring();                       // No args constructor
    Mystring(const char *s);          // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring(Mystring &&source) noexcept;       // Move constructor

    Mystring &operator=(const Mystring &rhs); // Copy assignment.
    Mystring &operator=(Mystring &&rhs); // Move assignment

    ~Mystring();                      // Destructor

    void display(void) const;
    int get_length(void) const; // getters
    const char *get_str(void) const;
};

#endif