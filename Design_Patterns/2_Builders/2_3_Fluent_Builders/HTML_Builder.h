#ifndef _HTML_BUILDER_H_
#define _HTML_BUILDER_H_

#include "HTML_Element.h"
#include <iostream>

class HTML_Builder
{
    HTML_Element root;

public:
    HTML_Builder(std::string root_name);

    HTML_Builder &add_child(std::string child_name, std::string child_text);

    HTML_Element build();

    std::string str() const;
    operator HTML_Element() const;
};

#endif