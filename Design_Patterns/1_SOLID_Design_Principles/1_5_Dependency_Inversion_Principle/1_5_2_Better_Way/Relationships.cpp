#include "Relationships.h"

void Relationships::add_parent_and_child(const Person &parent, const Person &child)
{
    relations.push_back({parent, Relationship::parent, child});
    relations.push_back({child, Relationship::child, parent});
}

std::vector<Person> Relationships::find_all_children_of(const std::string &name)
{
    std::vector<Person> result;

    for (auto && [first, rel, second] : relations)
    {
        if ((first.name == name) && (rel == Relationship::parent))
        {
            result.push_back(second);
        }
    }
    return result;
}

