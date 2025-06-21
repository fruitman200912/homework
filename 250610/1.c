#include<stdio.h>

int sum(int n)
{
    return (n+1)*n/2;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int a = sum(n);

    printf("%d\n", a);
}