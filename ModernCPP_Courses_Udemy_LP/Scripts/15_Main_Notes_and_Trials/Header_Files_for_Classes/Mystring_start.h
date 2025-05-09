#ifndef _MYSTRING_START_H_
#define _MYSTRING_START_H_

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

    int get_length(void) const; // getters
    const char *get_str(void) const;
};

#endif