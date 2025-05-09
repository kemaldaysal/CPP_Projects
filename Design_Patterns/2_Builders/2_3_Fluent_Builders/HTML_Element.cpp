#include "HTML_Element.h"

HTML_Element::HTML_Element() {}

HTML_Element::HTML_Element(const std::string &name, const std::string &text)
    : name{name}, text{text} {}

std::string HTML_Element::str(int indent) const
{
    std::ostringstream oss;
    std::string i(indent_size * indent, ' ');
    oss << i << "<" << name << ">" << std::endl;

    if (text.size() > 0)
    {
        oss << std::string(indent_size * (indent + 1), ' ') << text << std::endl;
    }

    for (const auto &e : elements)
    {
        oss << e.str(indent + 1); // recursive
    }

    oss << i << "</" << name << ">" << std::endl;
    return oss.str();
}