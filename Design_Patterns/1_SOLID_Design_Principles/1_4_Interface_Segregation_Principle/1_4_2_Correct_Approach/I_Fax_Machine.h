#ifndef _I_FAX_MACHINE_
#define _I_FAX_MACHINE_

#include "Document.h"

struct I_Fax_Machine
{
    virtual void fax(Document &doc) = 0;
};

#endif