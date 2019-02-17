#include <iostream>
#include <fstream>
#include "entry.h"
using namespace std;
int main()
{
    int n; //number of entries
    fstream input;
    input.open("entries.txt");
    input >> n;
    Entry entries[255];
    std::cout << ("Hello! Showing last 5 entries:");
    Entry k = Entry("sfkl");
    k.print();
    //for (int i = 0; i < 5; i++)
    //{
    //  entries[n - i].print();
    //}
}