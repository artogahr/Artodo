#ifndef ENTRY
#define ENTRY
#include <string>
#include <iostream>
#include "entryList.h"
class Entry
{
private:
  unsigned int year, month, day, hour, minute, id;
  std::string author, entry, details;
  bool done;

public:
    Entry();
  Entry(std::string input);
  ~Entry();
  void print();
};

#endif