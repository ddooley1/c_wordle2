#ifndef CPP_WORDLE
#define CPP_WORDLE

#include <iostream>
#include <vector>
#include <string>

namespace N
{
  class cpp_wordle
  {
  public:
    void printYellow();
    void printGreen();
    void resetText();

    int printMsg(const std::vector<std::string> &msg);

    void printTable();
    void printTitle();

    struct table {
      int tableLength = 5;
      int tableWidth = 5;
      std::string tableChar = "  --  ";
    };
    table table;  
  };
}

#endif