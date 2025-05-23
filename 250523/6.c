#include <stdio.h>
int main()
{
  int arr[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
      scanf("%d", &arr[i][j]);
  }

  int sum1 = 0, sum2 = 0;
  for (int i = 0; i < 3; i++)
    sum1 += arr[i][i];
  for (int i = 2; i > -1; i--)
  {
    sum2 += arr[2 - i][i];
  }

  printf("%d\n", sum1);
  printf("%d\n", sum2);

  return 0;
}