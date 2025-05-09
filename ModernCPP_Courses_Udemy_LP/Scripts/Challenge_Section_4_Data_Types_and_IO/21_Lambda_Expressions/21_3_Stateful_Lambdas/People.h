#ifndef _PEOPLE_H_
#define _PEOPLE_H_

#include <iostream>
#include <vector>
#include "Person.h"

// Class used in the test10() example
class People
{
    std::vector<Person> people;
    int max_people;

public:
    People(int max = 10);
    People(const People &p) = default;
    void add(std::string name, int age);
    void set_max_people(int max);
    int get_max_people() const;

    // This method returns a vector of Person objects in
    // people whose age > min_age AND it limits the number of
    // persons returned to be <= the member variable max_people.
    // Note that the lambda in this example captures this, by reference, and by value
    std::vector<Person> get_people(int min_age);
};

#endif