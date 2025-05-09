#include "Person.h"

Person::Person(std::string name, int age)
    : name{name}, age{age} {}

std::string Person::get_name() const
{
    return name;
}

void Person::set_name(std::string name)
{
    this->name = name;
}

int Person::get_age() const
{
    return age;
}

void Person::set_age(int age)
{
    this->age = age;
}

// auto can't be used if this class declaration is not in the same folder where it's used. 
// auto Person::change_person1()
// use "this"
std::function<void(std::string, int)> Person::change_person1()
{
    return [this](std::string new_name, int new_age)
    {name = new_name; age = new_age; };
}

// auto Person::change_person2() 
// deprecated, don't use this. It actually doesn't capture by value, it captures by reference only for objects.
std::function<void(std::string, int)> Person::change_person2()
{
    return [=](std::string new_name, int new_age)
    {name = new_name; age = new_age; };
}

// not recommended to use, why use it when we really wanna capture the this pointer?
// auto Person::change_person3()
std::function<void(std::string, int)> Person::change_person3()
{
    return [&](std::string new_name, int new_age)
    {name = new_name; age = new_age; };
}

std::ostream &operator<<(std::ostream &os, const Person &rhs)
{
    os << "[Person: " << rhs.name << " : " << rhs.age << "]";
    return os;
}