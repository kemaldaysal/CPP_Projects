#ifndef _I_PRINTER_
#define _I_PRINTER_

#include "Document.h"

struct I_Printer
{
    virtual void print(Document &doc) = 0;
};

#endif