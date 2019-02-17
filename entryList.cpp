#include "entryList.h"

entryList::entryList(int n)
{
    numberOfEntries = n;
    entries = new Entry[n];
}