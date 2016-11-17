#include <stdio.h>

int main()
{
  int sum = 0;
  for(int c = 1; c < 1000; c++)
    if(c % 3 == 0 || c % 5 == 0)
      sum += c;
  printf("%d\n", sum);
}