#include<stdio.h>

int main(void)
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int min = n1 > n2 ? n2 : n1;

    for (; min > 1; min--)
        if (n1 % min + n2 % min == 0)
            break;
    printf("%d\n", min);
}