#ifndef ENTRYLIST
#define ENTRYLIST
#include "entry.h"

class entryList
{
    entryList(int n);
    int numberOfEntries;
    Entry *entries;
};

#endif