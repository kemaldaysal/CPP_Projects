#include "Machine_PS_V2.h"

Machine_PS_V2::Machine_PS_V2(I_Printer &printer, I_Scanner &scanner)
    : printer{printer}, scanner{scanner} {}

void Machine_PS_V2::print(Document &doc)
{
    printer.print(doc);
}
void Machine_PS_V2::scan(Document &doc)
{
    scanner.scan(doc);
}
