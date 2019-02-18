#include "entry.h"

Entry::Entry()
{
}
Entry::~Entry()
{
}

Entry::Entry(std::string input)
{
    entry = input;
    file.open("entries.txt");
    file << "0 "
         << " 1 " << input << std::endl;
}
void Entry::print()
{
    std::cout << entry;
}