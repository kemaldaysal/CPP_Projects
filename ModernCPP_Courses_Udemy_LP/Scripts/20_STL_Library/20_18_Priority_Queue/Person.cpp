#include "Person.h"

Person::Person()
    : name{"Unknown"}, age{0} {}

Person::Person(std::string name, int age)
    : name{name}, age{age} {}

bool Person::operator<(const Person &rhs) const
{
    // return this->age < rhs.age; // int order by age
    return (this->name < rhs.name); // ascii order by name
}

bool Person::operator==(const Person &rhs) const
{
    return (this->name == rhs.name && this->age == rhs.age);
}

std::ostream &operator<<(std::ostream &os, const Person &p)
{
    os << p.name << ":" << p.age;
    return os;
}
