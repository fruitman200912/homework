#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int ipn = 1;
        for (int j = 2; j < i; j++)
            if (i % j == 0)
            {
                ipn = 0;
                break;
            }
        if (ipn)
            printf("%d ", i);
    }
}