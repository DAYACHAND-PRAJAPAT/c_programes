#include<stdio.h>
int check(int);
int main()
{
    int n;
    printf("enter a number n:");
    scanf("%d",&n);
    check(n);
    return 0;
}
int check(int p)
{
    int r,res=0;
    int s=p;
    while(p>0)
    {
        r=p%10;
        res=res*10+r;
        p=p/10;
    }
    if(res==s)
    {
        printf("the %d is a pallindrom number",s);
    }
    else
    {
        printf("the %d is not a pallindrom number ",s);
    }
    return 0;
}