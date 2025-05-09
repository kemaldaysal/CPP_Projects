#ifndef _I_RELATIONSHIP_BROWSER_H_
#define _I_RELATIONSHIP_BROWSER_H_

#include <iostream>
#include <vector>

#include "Person.h"

struct I_Relationship_Browser
{
    virtual std::vector<Person> find_all_children_of(const std::string &name) = 0;
};

#endif