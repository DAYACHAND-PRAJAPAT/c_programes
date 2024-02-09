#include<stdio.h>
main()
{
    int n,r;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        printf("%d",r);
    }
    return 0;
}