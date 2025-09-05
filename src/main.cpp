#include <iostream>
#include <vector>
#include <string>
#include "../inc/wordle.h"

using namespace N;
using namespace std;

int main()
{
  // Define welcome message, and wordle class for functions
  vector<string> msg = {"Hello, world!", "Testing out some stuff with C++, like porting my old Wordle project over to C++!"};

  // class instance
  cpp_wordle wordle;
  
  // print title / table
  wordle.printTitle();
  wordle.printTable();

  // run game logic
}