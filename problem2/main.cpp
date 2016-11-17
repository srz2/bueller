#include <stdio.h>

int main()
{
  unsigned int num1 = 1;
  unsigned int num2 = 2;
  unsigned int newNum = 0;
  unsigned int sum = 0;

  while(newNum < 4000000)
  {
    if(num2 % 2 == 0)
      sum += num2;

    newNum = num1 + num2;
    num1 = num2;
    num2 = newNum;
  }
  printf("%d\n", sum);
}