#include "Journal.h"

Journal::Journal(const std::string &title)
    : title{title} {}

void Journal::add_entry(const std::string &entry)
{
    static size_t count_of_entries {1};
    entries.push_back(boost::lexical_cast<std::string>(count_of_entries++) + ": " + entry);
}