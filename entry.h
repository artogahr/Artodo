#ifndef ENTRY
#define ENTRY
#include <string>
#include <iostream>
#include <fstream>
class Entry
{
private:
  unsigned int year, month, day, hour, minute, id;
  std::string author, entry, details;
  bool done;
  static Entry entries[5];
  std::fstream file;

public:
  Entry();
  Entry(std::string input);
  ~Entry();
  void print();
  void setDetails(std::string input);
};

#endif
