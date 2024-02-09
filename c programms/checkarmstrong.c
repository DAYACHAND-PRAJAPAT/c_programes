#include<stdio.h>
main()
{
    int n,p,r,res=0;
    printf("enter a number:");
    scanf("%d",&n);
    p=n;
    while(n>0)
    {
        r=n%10;
        res=res+r*r*r;
        n=n/10;
    }
    if(res==p)
    {
        printf("the %d is a armstrong number ",p);
    }
    else {
        printf("the %d is not a armstrong number ",p);
    }
    return 0;
}