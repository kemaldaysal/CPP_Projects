#include "Person.h"

bool Person::operator<(const Person &rhs) const
{
    return (this->age < rhs.age);
}

std::ostream &operator<<(std::ostream &os, const Person &p)
{
    os << p.name;
    return os;
}