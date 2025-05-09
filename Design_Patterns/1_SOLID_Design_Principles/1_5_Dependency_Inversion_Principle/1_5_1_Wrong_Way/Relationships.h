#ifndef _RELATIONSHIPS_H_
#define _RELATIONSHIPS_H_

#include <iostream>
#include <vector>
#include <tuple>

#include "Person.h"
#include "Relationship.h"

struct Relationships // low-level module
{
    std::vector<std::tuple<Person, Relationship, Person>> relations;
    void add_parent_and_child(const Person &parent, const Person &child);
};

#endif

