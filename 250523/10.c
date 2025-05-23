#include <stdio.h>
int main()
{
  int b[3][4];
  int a[4][3];

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 4; j++)
      scanf("%d", &b[i][j]);

  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 3; j++)
      a[i][j] = b[j][i];

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
      printf("%d ", a[i][j]);
    printf("\n");
  }
  return 0;
}