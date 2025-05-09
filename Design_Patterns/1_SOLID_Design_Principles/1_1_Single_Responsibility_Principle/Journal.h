#ifndef _JOURNAL_H_
#define _JOURNAL_H_

#include <boost/lexical_cast.hpp>
#include <iostream>
#include <vector>

struct Journal
{
    std::string title;
    std::vector<std::string> entries;

    Journal(const std::string &title);
    void add_entry(const std::string &entry);
};

#endif