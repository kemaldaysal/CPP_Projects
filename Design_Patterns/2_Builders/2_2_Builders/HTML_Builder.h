#ifndef _HTML_BUILDER_H_
#define _HTML_BUILDER_H_

#include "HTML_Element.h"
#include <iostream>

struct HTML_Builder
{
    HTML_Element root;

    HTML_Builder(std::string root_name);

    void add_child(std::string child_name, std::string child_text);

    std::string str() const;
};

#endif