#include<stdio.h>
main()
{
    int n,r,res=10,p;
    printf("enter a numer n:");
    scanf("%d",&n);
     p=n;
    while(n>0)
    {
        r=n%10;
        res=res*10+r;
        n=n/10;
    }
    if(r==p)
    {
        printf("%d is a pallindrom number ",p);
    }
    else
    {
        printf("%d is not a pallindrom number ",p);
    }
    return 0;
}