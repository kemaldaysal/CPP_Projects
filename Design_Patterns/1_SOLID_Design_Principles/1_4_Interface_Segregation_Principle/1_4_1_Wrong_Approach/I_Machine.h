#ifndef _I_MACHINE_
#define _I_MACHINE_

#include "Document.h"

struct I_Machine
{
    virtual void print(Document &doc) = 0;
    virtual void scan(Document &doc) = 0;
    virtual void fax(Document &doc) = 0;
};

#endif