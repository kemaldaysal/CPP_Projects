#include "People.h"

People::People(int max)
    : max_people(max) {}

void People::add(std::string name, int age)
{
    people.emplace_back(name, age);
}

void People::set_max_people(int max)
{
    max_people = max;
}

int People::get_max_people() const
{
    return max_people;
}

// This method returns a vector of Person objects in
// people whose age > min_age AND it limits the number of
// persons returned to be <= the member variable max_people.
// Note that the lambda in this example captures this, by reference, and by value
std::vector<Person> People::get_people(int min_age)
{
    std::vector<Person> result;
    int count{0};
    std::copy_if(people.begin(),
                 people.end(),
                 std::back_inserter(result),
                 [this, &count, min_age](const Person &p)
                 { return p.get_age() > min_age && ++count <= max_people; });
    return result;
}