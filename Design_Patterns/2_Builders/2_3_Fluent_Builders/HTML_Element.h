#ifndef _HTML_ELEMENT_H_
#define _HTML_ELEMENT_H_

#include <iostream>
#include <vector>
#include <sstream>

class HTML_Element
{
    friend class HTML_Builder;
    std::string name;
    std::string text;
    std::vector<HTML_Element> elements;

    const size_t indent_size{2};

    HTML_Element();
    HTML_Element(const std::string &name, const std::string &text);

public:
    std::string str(int indent = 0) const;

    // Hint to use the builder
    static HTML_Builder create(std::string root_name)
    {
        return {root_name};
    }
};

#endif