#ifndef _SCANNER_H_
#define _SCANNER_H_

#include "I_Machine.h"

struct Scanner : I_Machine
{
    virtual void print(Document &doc) override; 
    virtual void scan(Document &doc) override; // we only need this
    virtual void fax(Document &doc) override;
};

#endif