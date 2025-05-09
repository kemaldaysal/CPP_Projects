#ifndef _MFP_
#define _MFP_

#include "I_Machine.h"

struct MFP : I_Machine
{
    virtual void print(Document &doc) override;
    virtual void scan(Document &doc) override;
    virtual void fax(Document &doc) override;
};

#endif