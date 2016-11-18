#include <iostream>
using namespace std;

bool isPal(int num)
{
  char temp[3];
  sprintf(temp, "%d", num);
  string thing = string(temp);

  string thing2 = "";
  for(int c = thing.size() - 1; c >= 0; c--)
  {
    thing2 += thing[c];
  }

  if(thing2.compare(thing) == 0)
    return true;
  else
    return false;
}

int main()
{
  const int start = 100;
  const int end = 999;
  int num1 = end;
  int num2 = end;
  int max = 0;

  for(int c = start; c <= end; c++)
  {
    for(int z = start; z <= end; z++)
    {
      int val = c * z;
      if(isPal(val))
      {
        if(val > max)
        {
          max = val;
        }
      }
    }
  }
  cout << "Answer: " << max << endl;
}