#include <math.h>
#include <stdio.h>

void power_set(int X[], int n)
{
  int i, j, totalSubsets = pow(2, n);

  for (i = 0; i < totalSubsets; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (i & (1 << j))
        printf("%d", X[j]);
    }
    printf("\n");
  }
}

int main()
{
  int A[] = {2, 4, 6}, size = 3;
  printf("Power set: ");
  power_set(A, size);
  return 0;
}