#ifndef _RELATIONSHIPS_H_
#define _RELATIONSHIPS_H_

#include <iostream>
#include <vector>
#include <tuple>

#include "Person.h"
#include "Relationship.h"
#include "I_Relationship_Browser.h"

struct Relationships : I_Relationship_Browser // low-level module
{
    std::vector<std::tuple<Person, Relationship, Person>> relations;
    void add_parent_and_child(const Person &parent, const Person &child);

    virtual std::vector<Person> find_all_children_of(const std::string &name) override;

};

#endif

