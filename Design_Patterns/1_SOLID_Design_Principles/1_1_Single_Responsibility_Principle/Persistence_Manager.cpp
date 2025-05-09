#include "Persistence_Manager.h"

void Persistence_Manager::save(const Journal &j, const std::string &filename)
{
    std::ofstream ofs(filename);
    for (auto &e : j.entries)
    {
        ofs << e << std::endl;
    }
    // file will be closed automatically by destructors, just after when it's out of scope 
}