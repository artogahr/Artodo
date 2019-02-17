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
}
void Entry::print()
{
    std::cout << entry;
}