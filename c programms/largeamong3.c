#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is the largest number",a);
    }
    else if(b>c)
    {
        printf("the %d is largest number ",b);
    }
    else
    {
        printf("the %d is largest number ",c);
    }
    return 0;
}