#include "Person.h"

Person::Person(std::string name, int age)
    : name{name}, age{age} {}

Person::Person(const Person &p) // copy constructor
    : name{p.name}, age{p.age}{}

std::string Person::get_name() const
{
    return name;
}

void Person::set_name(std::string name)
{
    this->name = name;
};

int Person::get_age() const
{
    return age;
}

void Person::set_age(int age)
{
    this->age = age;
}

std::ostream &operator<<(std::ostream &os, const Person &rhs)
{
    os << "[Person: " << rhs.name << " : " << rhs.age << "]";
    return os;
}