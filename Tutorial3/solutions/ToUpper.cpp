#include <iostream>
#include <string>

using namespace std;

string toUpper(string input)
{
  for(int i {}; i < input.size() ; ++i)
  {
    if(input.at(i)>=97 && input.at(i) <= 122)
    {
      input.at(i)-=32;
    }
  }
  return input;
}

int main()
{
  string test {"hello! HoW aRe YoU?"s};
  cout << toUpper(test) << endl;
}
