#include <iostream>

using namespace std;

void printASCII()
{
  cout << "Code \t Zeichen" << endl;
  char character{};
  for(int i{}; i<=127; ++i)
  {
    character = i;
    cout << i << '\t' << character << endl;
  }
}

int main()
{
  printASCII();
}
