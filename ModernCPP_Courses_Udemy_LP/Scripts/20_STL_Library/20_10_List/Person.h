#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>

class Person
{
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    size_t age;
public:
    Person();
    Person(std::string name, size_t age);
    bool operator<(const Person &rhs) const;
    bool operator==(const Person &rhs) const;
};

#endif