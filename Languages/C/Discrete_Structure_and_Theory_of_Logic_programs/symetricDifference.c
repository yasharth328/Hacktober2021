#include <stdio.h>

int Symmetric_Difference(int X[], int Y[], int m, int n)
{
  int i, j, k = 0, Z[10], flag = 0;
  // for first set
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (X[i] == Y[j])
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
      Z[k++] = X[i];
    flag = 0; //reset flag to zero for next iteration
  }
  // for second set
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      if (Y[i] == X[j])
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
      Z[k++] = Y[i];
    flag = 0; //reset flag to zero for next iteration
  }

  printf("\nSymmetric Difference of sets: ");
  for (i = 0; i < k; i++)
    printf("%d  ", Z[i]);
}

int main()
{
  int A[10], B[10], s1, s2;

  printf("\nEnter size of first set: ");
  scanf("%d", &s1);
  printf("\nEnter elements: ");
  for (int i = 0; i < s1; i++)
    scanf("%d", &A[i]);

  printf("\nEnter size of second set: ");
  scanf("%d", &s2);
  printf("\nEnter elements: ");
  for (int i = 0; i < s2; i++)
    scanf("%d", &B[i]);

  Symmetric_Difference(A, B, s1, s2);
  return 0;
}
