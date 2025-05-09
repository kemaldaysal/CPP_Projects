#include "Person.h"

Person::Person(std::string name, size_t age)
    : name{name}, age{age} {}

bool Person::operator<(const Person &rhs) const
{
    return (this->age < rhs.age);
}

bool Person::operator=(const Person &rhs) const
{
    return ((this->age == rhs.age) && (this->name == rhs.name));
}

std::ostream &operator<<(std::ostream &os, const Person &p)
{
    os << p.name << ": " << p.age;
    return os;
}