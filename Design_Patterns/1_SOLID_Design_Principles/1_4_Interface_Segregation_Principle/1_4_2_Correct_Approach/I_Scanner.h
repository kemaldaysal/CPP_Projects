#ifndef _I_SCANNER_
#define _I_SCANNER_

#include "Document.h"

struct I_Scanner
{
    virtual void scan(Document &doc) = 0;
};

#endif