#include "Research.h"

Research::Research(Relationships &relationships)
{
    auto& relations {relationships.relations};
    for (auto&& [first, rel, second] : relations)
    {
        if (first.name == "John" && rel == Relationship::parent)
        {
            std::cout << "John has a child called " << second.name << std::endl;
        }
    }
}
