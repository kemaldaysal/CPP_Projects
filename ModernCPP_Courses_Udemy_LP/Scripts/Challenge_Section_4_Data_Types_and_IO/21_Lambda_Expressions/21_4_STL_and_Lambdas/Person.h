#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>

// Used for test5
class Person
{
    friend std::ostream &operator<<(std::ostream &os, const Person &rhs);

private:
    std::string name;
    int age;

public:
    Person(std::string name, int age);
    Person(const Person &p);
    ~Person() = default;
    std::string get_name() const;
    void set_name(std::string name);
    int get_age() const;
    void set_age(int age);
};

#endif