#ifndef _MACHINE_PS_V1
#define _MACHINE_PS_V1

#include "I_Machine_PS.h"

struct Machine_PS_V1 : I_Machine_PS
{
    virtual void print(Document &doc) override;
    virtual void scan(Document &doc) override;
};

#endif