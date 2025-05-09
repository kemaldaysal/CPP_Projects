#include "Person.h"

Person::Person(std::string name, int age)
    : name{name}, age{age} {}

bool Person::operator<(const Person &rhs) const
{
    return (this->age < rhs.age);
}

bool Person::operator==(const Person &rhs) const
{
    return ((this->name == rhs.name) && (this->age == rhs.age));
}