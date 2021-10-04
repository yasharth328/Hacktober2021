#include <stdio.h>

int Difference(int X[], int Y[], int m, int n)
{
  int i, j, k = 0, l = 0, Z1[10], Z2[10], flag = 0;
  // set difference A-B
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
    {
      Z1[k++] = X[i];
    }
    flag = 0; //reset flag for next iteration
  }
  // set difference B-A
  flag = 0; //reset flag to zero.
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
    {
      Z2[l++] = Y[i];
    }
    flag = 0; //reset flag for next iteration
  }

  printf("\nDifference  of sets: \nA-B: ");
  for (i = 0; i < k; i++)
    printf("%d  ", Z1[i]);
  printf("\nB-A: ");
  for (i = 0; i < l; i++)
    printf("%d  ", Z2[i]);
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

  Difference(A, B, s1, s2);
  return 0;
}
