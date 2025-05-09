#ifndef _MYSTRING_OPERATOR_METHODS_H_
#define _MYSTRING_OPERATOR_METHODS_H_

class Mystring
{
private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring();                       // No args constructor
    Mystring(const char *s);          // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring(Mystring &&source) noexcept;       // Move constructor

    Mystring &operator=(const Mystring &rhs); // Copy assignment.
    Mystring &operator=(Mystring &&rhs); // Move assignment

    Mystring operator-() const; // make lowercase
    Mystring operator+(const Mystring &rhs) const; // concatenate
    bool operator==(const Mystring &rhs) const; // equality check


    ~Mystring();                      // Destructor

    void display(void) const;
    int get_length(void) const; // getters
    const char *get_str(void) const;
};

#endif