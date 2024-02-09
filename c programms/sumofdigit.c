#include<stdio.h>
main()
{
    int n,sum=0,r;
    printf("enter a number n:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("the sum of the number is:%d",sum);
    return 0;
}