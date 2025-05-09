#ifndef _SCANNER_H_
#define _SCANNER_H_

#include "I_Scanner.h"

struct Scanner : I_Scanner
{
    virtual void scan(Document &doc) override;
};

#endif