#include <iostream>
#include <sstream>

int main()
{
    auto text {"hello"};
    std::string output;
    output += "<p>";
    output += text;
    output += "</p>";
    std::cout << output << std::endl;

    std::string words[] = {"hello", "world"};
    std::ostringstream oss;
    oss << "<ul>";
    for (auto w: words)
    {
        oss << " <li>" << w << " </li>";
    }
    oss << "</ul>";

    std::cout << oss.str() << std::endl;

    // <ul> <li>hello </li> <li>world </li></ul>

    return 0;
}