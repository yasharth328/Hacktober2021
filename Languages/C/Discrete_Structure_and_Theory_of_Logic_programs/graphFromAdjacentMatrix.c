#include <stdio.h>

void displayAdjacencyMat(int X[4][4])
{
  printf("\nAjacency Matrix: \n");
  printf(" |  1  2  3  4\n_______________\n");
  for (int i = 0; i < 4; i++)
  {
    printf("%d|  ", i + 1);
    for (int j = 0; j < 4; j++)
    {
      printf("%d  ", X[i][j]);
    }
    printf("\n");
  }
}

void show_graph()
{
  printf("Sample Graph\n");
  printf("1-----2\n");
  printf("| \\   |\n");
  printf("|  \\  |\n");
  printf("3-----4\n");
}

void add_edge(int Y[4][4], int a, int b)
{
  Y[a - 1][b - 1] = 1;
}

int main()
{
  int A[4][4];
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      A[i][j] = 0;
    }
  }
  show_graph();
  add_edge(A, 1, 2);
  add_edge(A, 1, 3);
  add_edge(A, 1, 4);

  add_edge(A, 2, 4);
  add_edge(A, 2, 1);

  add_edge(A, 3, 1);
  add_edge(A, 3, 4);

  add_edge(A, 4, 1);
  add_edge(A, 4, 2);
  add_edge(A, 4, 3);

  displayAdjacencyMat(A);
  return 0;
}