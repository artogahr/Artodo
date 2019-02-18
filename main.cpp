#include <iostream>
#include "entry.h"
using namespace std;
void add(Entry *entries, string entry, int n);

int main(int argc, char *argv[])
{
    Entry entries[255];
    int n; //number of entries
    fstream input;
    //checkOptions
    input.open("entries.txt");
    input >> n;
    cout << n;
    for (int i = 0; i < 3; i++)
    {
        if (argv[1] == "add")
        {
            add(entries, argv[2], n);
        }
        else if (argv[1] == "rm")
        {
            // remove(argv[2]);
        }
        else if (argv[1] == "list")
        {
            //list();
        }
    }
    cout << ("Hello! Showing last 5 entries:") << endl;

    for (int i = 0; i < 5; i++)
    {
        entries[i].print();
    }
}

void add(Entry *entries, string input, int n)
{
    entries[n] = Entry(input);
}