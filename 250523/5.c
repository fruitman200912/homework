#include <stdio.h>
int main()
{
  int arr[2][3];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
      scanf("%d", &arr[i][j]);
  }
  int sum = 0;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
      sum += arr[i][j];
  }
  printf("%d\n", sum);
}