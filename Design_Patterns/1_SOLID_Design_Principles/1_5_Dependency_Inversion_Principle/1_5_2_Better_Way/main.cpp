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

    Research research_obj(relationships);

    /* The code with your version
    std::string name {"John"};
    bool valid_name {false};
    for (const auto &tpl : relationships.relations)
    {
        // auto test {std::get<0>(tpl).name};
        // std::cout << "Test: " << test << std::endl;
        if((((std::get<0>(tpl)).name) == name) && ((std::get<1>(tpl)) == Relationship::parent))
        {
            valid_name = true;
            Research research_obj(relationships, name);
        }
    }

    if (valid_name == false)
    {
        std::cout << "Parent name is not valid, enter a valid name." << std::endl;
    }
    */

    /* Outputs
    John has a child called Chris
    John has a child called Matt
    */

    return 0;
}