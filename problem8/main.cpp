#include <stdio.h>
#include <time.h>

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char ** argv)
{
  time_t start = clock();

  int maskSize = 0;
  if(argc != 2)
  {
    printf("Expecting one argument for mask size\n");
    return 0;
  }
  else
  {
    maskSize = atoi(argv[1]);
  }

  string line = "";
  ifstream inFile("data.dat");
  if(!inFile)
  {
    printf("File not found\n");
    return 0;
  }
  else
  {
    string t_line = "";
    while(inFile >> t_line)
    {
      line += t_line;
    }
  }
  inFile.close();

  string maxString = "";
  uint64_t max = 0;
  int size = line.length();
  for(int c = 0; c < size; c++)
  {
    if(c + maskSize < size)
    {
      string sub = line.substr(c, maskSize);
      uint64_t temp = (int)sub[0] - '0';
      for(int a = 1; a < sub.length(); a++)
      {
        temp *= (int)sub[a] - '0';
      }
      if(temp > max)
      {
        maxString = sub;
        max = temp;
      }
    }
  }

  cout << "Greatest product is: " << max << endl;
  cout << "Greatest product string is: " << maxString << endl;

  time_t end = clock();
  printf("Run Time: %0.6f seconds\n", ((double)(end - start) / CLOCKS_PER_SEC));

  return 0;
}
