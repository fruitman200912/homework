int main()
{
    char a[10];
    char b[10];
    int i = 0;

    scanf("%s",a);
    scanf("%s",b);

    while(a[i]!='\0' && b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            printf("x");
            return 1;
        }
        i++;
    }
    printf("o");
    return 0;
}