#include <stdio.h>
#include <time.h>

int main()
{
  time_t start = clock();

  int value = 100;

  //sum of squares
  unsigned long sumOfSquares = 0;
  unsigned long squareOfSums = 0;
  for(int c = 1; c <= value; c++)
  {
    sumOfSquares += (c * c);
    squareOfSums += c;
  }

  //square of sums
  squareOfSums = squareOfSums * squareOfSums;

  // printf("Sum of Squares: %ld\n", sumOfSquares);
  // printf("Square of Sums: %ld\n", squareOfSums);
  printf("Difference: %ld\n", squareOfSums - sumOfSquares);

  time_t end = clock();
  printf("Run Time: %0.6f seconds\n", ((double)(end - start) / CLOCKS_PER_SEC));
}