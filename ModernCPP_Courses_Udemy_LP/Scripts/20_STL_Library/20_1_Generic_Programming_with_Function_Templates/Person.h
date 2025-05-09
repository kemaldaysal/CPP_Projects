#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>

struct Person
{
    std::string name;
    int age;

    bool operator<(const Person &rhs) const; // overloaded function
};

std::ostream &operator<<(std::ostream &os, const Person &p); 
// "friend" keyword not needed for this since it's already public

#endif