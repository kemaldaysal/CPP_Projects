#include <iostream>
#include <string>
#include <ostream>
#include <vector> // i added this
// using namespace std;

class CodeBuilder
{
public:
    std::string class_name;
    std::vector<std::pair<std::string, std::string>> attributes;

    CodeBuilder(const std::string &class_name)
        : class_name{class_name}
    {
        // todo
    }

    CodeBuilder &add_field(const std::string &name, const std::string &type)
    {
        // todo
        attributes.emplace_back(type, name);
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &os, const CodeBuilder &obj)
    {
        // todo
        os << "class " << obj.class_name << "\n{\n";
        for (auto &atr: obj.attributes)
        {
            os << "  " << atr.first << " " << atr.second << ";\n";
        }
        os << "};";
        return os;
    }
};

int main()
{
    auto cb {CodeBuilder{"Person"}.add_field("name","string").add_field("age", "int")};
    std::cout << cb << std::endl;
    return 0;
}