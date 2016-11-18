#include <stdio.h>

int main()
{
  unsigned long x = 600851475143;
  unsigned long lpf = 2;
  int numPasses = 0;
  while (x > lpf)
  {
    if (x%lpf==0)
    {
            x = x/lpf;
            lpf = 2;
    }
    else
    {
            lpf++;
    }
    numPasses++;
  }
  printf("Largested: %ld\n", lpf);
  printf("Num Passes: %d\n", numPasses);
}