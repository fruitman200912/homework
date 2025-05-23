#include <stdio.h>
int main()
{
  int arr[7];
  for (int i = 0; i < 7; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 6; i > -1; i--)
  {
    printf("%d ", arr[i]);
  }
}