#include <iostream>
#include <time.h>
using namespace std;

bool isValid(unsigned long number, unsigned long max)
{
  for(int c = 1; c <= max; c++)
  {
    //cout << number << " % " << c << " = " << (number % c) << endl;
    if(number % c != 0)
      return false;
  }
  return true;
}

int main(int argc, char ** argv)
{
  clock_t start = clock();

  unsigned long max = 10;
  if(argc == 2)
  {
    for(int c = 0; c < strlen(argv[1]); c++)
    {
      if(!isdigit(argv[1][c]))
      {
        cout << "Invalid input: " << argv[1] << endl;
        return 1;
      }
    }
    max = atoi(argv[1]);
  }
  unsigned long number = max;

  cout << "1 to " << max << endl;
  while(!isValid(number, max))
  {
    number+=max;
  }
  printf("Value: %ld\n", number);
  printf("Run time: %0.6fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
  return 0;
}