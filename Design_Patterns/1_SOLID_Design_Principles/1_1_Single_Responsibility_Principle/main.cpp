#include <iostream>

#include "Journal.h"
#include "Persistence_Manager.h"

int main()
{
    Journal journal{"Dear Diary"};
    journal.add_entry("First day at school");
    journal.add_entry("Doomsday");

    // journal.save("diary.txt") // DON'T USE THIS.
    Persistence_Manager pm;
    pm.save(journal, "diary.txt");

    getchar();
    return 0;
}