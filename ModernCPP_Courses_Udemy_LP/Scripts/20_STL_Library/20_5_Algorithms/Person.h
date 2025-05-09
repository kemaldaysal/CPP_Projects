#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>

class Person
{
    std::string name;
    int age;

public:
    Person() = default;
    Person(std::string name, int age);
    bool operator<(const Person &rhs) const;
    bool operator==(const Person &rhs) const;
};

#endif