#include <stdio.h>
void cartesian_product(int X[], int Y[], int s1, int s2)
{
  int i, j;
  for (i = 0; i < s1; i++)
  {
    for (j = 0; j < s2; j++)
    {
      printf("(%d,%d)  ", X[i], Y[j]);
    }
  }
}

int main()
{

  int A[] = {1, 3, 5}, B[] = {2, 4, 6}, m = 3, n = 3;
  printf("\nCartesian Product of sets: ");
  cartesian_product(A, B, m, n);

  return 0;
}