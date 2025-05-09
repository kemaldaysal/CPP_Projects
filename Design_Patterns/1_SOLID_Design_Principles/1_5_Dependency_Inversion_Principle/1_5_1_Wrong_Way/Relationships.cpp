#include "Relationships.h"

void Relationships::add_parent_and_child(const Person &parent, const Person &child)
{
    relations.push_back({parent, Relationship::parent, child});
    relations.push_back({child, Relationship::child, parent});
}
