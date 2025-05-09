#ifndef _PERSISTENCE_MANAGER_H_
#define _PERSISTENCE_MANAGER_H_

#include <iostream>
#include "Journal.h"
#include <fstream>

struct Persistence_Manager
{
    static void save(const Journal &j, const std::string &filename);
};

#endif