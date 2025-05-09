#include "HTML_Builder.h"

HTML_Builder::HTML_Builder(std::string root_name)
{
    root.name = root_name;
}

void HTML_Builder::add_child(std::string child_name, std::string child_text)
{
    HTML_Element e{child_name, child_text};
    root.elements.emplace_back(e);
}

std::string HTML_Builder::str() const
{
    return root.str();
}
