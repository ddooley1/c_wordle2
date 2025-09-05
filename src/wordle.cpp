#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "../inc/wordle.h"

using namespace N;
using namespace std;

void cpp_wordle::printYellow()
{
  cout << ("\033[0;33m");
}

void cpp_wordle::printGreen()
{
  cout << ("\033[0;32m");
}

void cpp_wordle::resetText()
{
  cout << ("\033[0m");
}

void cpp_wordle::printTable()
{
  for (int i = 0; i < table.tableLength; i++)
  {
    for (int j = 0; j < table.tableWidth; j++)
    {
      cout << table.tableChar;
    }
    cout << endl;
  }
}

void cpp_wordle::printTitle(){
  string text;
  fstream titleFile("title.txt");

  while(getline(titleFile, text)){
    cout << text << endl;
  };

  titleFile.close();
}

// testing stuff
int cpp_wordle::printMsg(const std::vector<std::string> &msg)
{
  cout << "Printing in green text!" << endl;
  for (const string &word : msg)
  {
    printGreen();
    cout << word << " ";
  }
  cout << endl;
  resetText();

  cout << "Printing in yellow text!" << endl;
  for (const string &word : msg)
  {
    printYellow();
    cout << word << " ";
  }
  cout << endl;
  resetText();

  return 0;
}