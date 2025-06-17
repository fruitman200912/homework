#include<stdio.h>

int main()
{
    char a[10];
    char b[20];
    int t = 0;

    scanf("%s",a);
    scanf("%s",b);

    for(int i=0;i<10;i++)
    {
        if(a[i]=='\0')
        {
            for (int j=i;b[t-1] != '\0';j++)
            {
                a[j] = b[t];
                t++;
            }
        }
    }

    printf("%s",a);
    return 0;
}