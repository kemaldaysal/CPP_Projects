#include <iostream>
#include <sstream>

#include "HTML_Builder.h"

int main()
{
    auto text{"hello"};
    std::string output;
    output += "<p>";
    output += text;
    output += "</p>";
    std::cout << output << std::endl;

    std::string words[] = {"hello", "world"};
    std::ostringstream oss;
    oss << "<ul>";
    for (auto w : words)
    {
        oss << " <li>" << w << " </li>";
    }
    oss << "</ul>";

    std::cout << oss.str() << std::endl;

    // <ul> <li>hello </li> <li>world </li></ul>

    HTML_Builder builder{"ul"};
    // builder.add_child("li", "hello");
    // builder.add_child("li", "world");
    builder.add_child("li", "hello").add_child("li", "world");

    std::cout << builder.str() << std::endl;

    /* Outputs:
    <ul>
        <li>
            hello
        </li>
        <li>
            world
        </li>
    </ul>
    */

    HTML_Element elem {HTML_Element::create("ul").add_child("", "")};
    // HTML_Element::create("").add_child().build();

    return 0;
}