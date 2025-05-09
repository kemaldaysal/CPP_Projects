#ifndef _MACHINE_PS_V2_
#define _MACHINE_PS_V2_

#include "I_Machine_PS.h"

struct Machine_PS_V2 : I_Machine_PS
{
    I_Printer& printer;
    I_Scanner& scanner;

    Machine_PS_V2(I_Printer &printer, I_Scanner &scanner);

    virtual void print(Document &doc) override;
    virtual void scan(Document &doc) override;

};

#endif