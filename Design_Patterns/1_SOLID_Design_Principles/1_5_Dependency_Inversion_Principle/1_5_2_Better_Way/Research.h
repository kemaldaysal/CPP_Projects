#ifndef _RESEARCH_H_
#define _RESEARCH_H_

#include "I_Relationship_Browser.h"
// #include "Relationships.h"

struct Research
{
    Research(I_Relationship_Browser &browser); // Instructor's version
    // Research(I_Relationship_Browser &browser, const std::string &name); // your version but not sure about principle compabilities
    // Research(Relationships &relationships); // older, wrong version
};

#endif