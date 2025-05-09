#ifndef _HTML_ELEMENT_H_
#define _HTML_ELEMENT_H_

#include <iostream>
#include <vector>
#include <sstream>

struct HTML_Element
{
    std::string name;
    std::string text;
    std::vector<HTML_Element> elements;

    const size_t indent_size {2};

    HTML_Element();
    HTML_Element(const std::string &name, const std::string &text);

    std::string str(int indent = 0) const;
};

#endif