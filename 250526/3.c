#include<stdio.h>

int main(void)
{
    char a[10];
    char b[10];

    scanf("%s", a);

    int i = 0;

    while(a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';

    printf("%s\n", b);
}