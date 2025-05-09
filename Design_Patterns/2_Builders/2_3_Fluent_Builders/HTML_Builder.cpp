#include "HTML_Builder.h"

HTML_Builder::HTML_Builder(std::string root_name)
{
    root.name = root_name;
}

HTML_Builder &HTML_Builder::add_child(std::string child_name, std::string child_text)
{
    HTML_Element e{child_name, child_text};
    root.elements.emplace_back(e);
    return (*this);
}

HTML_Element HTML_Builder::build()
{
    return root;
}

std::string HTML_Builder::str() const
{
    return root.str();
}

HTML_Builder::operator HTML_Element() const
{
    return root;
}

