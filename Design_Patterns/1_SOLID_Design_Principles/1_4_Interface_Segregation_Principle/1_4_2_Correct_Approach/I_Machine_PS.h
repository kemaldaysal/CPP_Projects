#ifndef _I_MACHINE_PS_
#define _I_MACHINE_PS_

#include "Document.h"
#include "I_Printer.h"
#include "I_Scanner.h"

struct I_Machine_PS : I_Printer, I_Scanner 
{
    // pure virtual functions are inherited automatically, 
    // and they'll stay as pure virtual functions since no overrides made
    // So this class is an interface class.
};

#endif