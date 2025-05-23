#include <stdio.h>
int main()
{
  int arr[7];
  for (int i = 0; i < 7; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 3; i++)
  {
    int temp = arr[i];
    arr[i] = arr[6 - i];
    arr[6 - i] = temp;
  }
  for (int i = 0; i < 7; i++)
    printf("%d ", arr[i]);
}