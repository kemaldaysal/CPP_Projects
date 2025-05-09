#include <iostream>
#include "Person.h"
#include "Relationships.h"
#include "Research.h"

int main()
{
    Person parent{"John"};
    Person child_1{"Chris"};
    Person child_2{"Matt"};

    Relationships relationships;
    relationships.add_parent_and_child(parent, child_1);
    relationships.add_parent_and_child(parent, child_2);

    Research research_obj{relationships};

    return 0;
}