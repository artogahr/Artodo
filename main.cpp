#include <iostream>
#include <cstring>
#include "entry.h"
#include <sqlite3.h>

using namespace std;
void add(Entry *entries, string entry, int n);

int main(int argc, char *argv[])
{
    Entry *entries;
    entries = new Entry[255];
    int n; //number of entries
    fstream input;
    //checkOptions
    input.open("entries.txt");
    input >> n;
    if (!strcmp(argv[1], "add"))
    {
        cout << "slkdjf";
        entries[n].setDetails(argv[2]);
        input << argv[2] << endl;
        }
    else if (argv[1] == "rm")
    {
        // remove(argv[2]);
    }
    else if (argv[1] == "list")
    {
        //list();
    }

    cout << ("Hello! Showing last 5 entries:") << endl;

    for (int i = 0; i < 5; i++)
    {
        entries[i].print();
    }
}

void add(Entry *entries, string input, int n)
{
}