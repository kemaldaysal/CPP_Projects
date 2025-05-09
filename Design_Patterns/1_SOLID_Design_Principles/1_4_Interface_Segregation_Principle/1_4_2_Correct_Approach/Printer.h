#ifndef _PRINTER_H_
#define _PRINTER_H_

#include "I_Printer.h"

struct Printer : I_Printer
{
    virtual void print(Document &doc) override;
};

#endif