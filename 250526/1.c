#include<stdio.h>

int main()
{
    char str[100];
    scanf("%s",str);

    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
        len++;

    for (int i = 0; i < len; i++)
    {
        char temp = str[i];
        str[i] = str[len-1];
        str[len-1] = temp;
        len--;
    }
    printf("%s",str);
}