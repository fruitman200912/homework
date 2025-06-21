#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int ipn = 1;
    for (int i = 2; i < n/2+1; i++)
        if (n%i == 0)
        {
            ipn = 0;
            break;
        }
    if (ipn)
        printf("O\n");
    else
        printf("X\n");
}