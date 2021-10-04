#include <stdio.h>

void main()
{
  int A[2][2], B[2][2], C[2], i, j;

  for (i = 0; i <= 1; i++)
  {
    for (j = 0; j <= 1; j++)
    {
      A[i][j] = (i && j);
      B[i][j] = (i || j);
    }
  }

  for (i = 0; i <= 1; i++)
  {
    C[i] = (!i);
  }

  printf("\nTruth Table for AND \n");
  printf("  A  |  B  |  O/P\n");
  for (i = 0; i <= 1; i++)
  {
    for (j = 0; j <= 1; j++)
    {
      printf("  %d  |  %d  |  %d\n", i, j, A[i][j]);
    }
  }
  printf("\nTruth Table for OR \n");
  printf("  A  |  B  |  O/P\n");
  for (i = 0; i <= 1; i++)
  {
    for (j = 0; j <= 1; j++)
    {
      printf("  %d  |  %d  |  %d\n", i, j, B[i][j]);
    }
  }

  printf("\nTruth Table for NOT\n");
  printf("  A  |  B  |  O/P\n");
  for (i = 0; i <= 1; i++)
  {
    printf("  %d  |  %d  |  %d\n", i, C[i]);
  }
}