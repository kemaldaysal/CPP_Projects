#ifndef _MYSTRING_COPY_ASSIGNMENT_H_
#define _MYSTRING_COPY_ASSIGNMENT_H_

class Mystring
{
private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring();                       // No args constructor
    Mystring(const char *s);          // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    ~Mystring();                      // Destructor
    void display(void) const;

    Mystring &operator=(const Mystring &rhs); // Copy assignment.

    int get_length(void) const; // getters
    const char *get_str(void) const;
};

#endif