#include <stdio.h>

int Union(int X[], int Y[], int m, int n)
{
  int i, j, k, U[20];
  for (i = 0, j = 0, k = 0; i < m && j < n; k++)
  {
    while (X[i] == Y[j])
      i++;
    if (X[i] < Y[j])
    {
      U[k] = X[i];
      i++;
    }
    else if (X[i] > Y[j])
    {
      U[k] = Y[j];
      j++;
    }
  }
  while (i < m)
  {
    U[k++] = X[i];
    i++;
  }
  while (j < n)
  {
    U[k++] = Y[j];
    j++;
  }

  printf("Union of sets: ");
  for (i = 0; i < k; i++)
    printf("%d  ", U[i]);
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

  Union(A, B, s1, s2);
  return 0;
}