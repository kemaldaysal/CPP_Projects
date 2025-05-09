#include "Research.h"

Research::Research(I_Relationship_Browser &browser) // Instructor's version
{
    for (auto& child : browser.find_all_children_of("John"))
    {
        std::cout << "John" << " has a child called " << child.name << std::endl;
    }
}

// Research::Research(I_Relationship_Browser &browser, const std::string &name) // your version but not sure about principle compabilities
// {
//     for (auto& child : browser.find_all_children_of(name))
//     {
//         std::cout << name << " has a child called " << child.name << std::endl;
//     }
// }

// Research::Research(Relationships &relationships)
// {
//     auto& relations {relationships.relations};
//     for (auto&& [first, rel, second] : relations)
//     {
//         if (first.name == "John" && rel == Relationship::parent)
//         {
//             std::cout << "John has a child called " << second.name << std::endl;
//         }
//     }
// }
