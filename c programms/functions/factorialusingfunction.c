#include<stdio.h>
int fact(int*);
int main()
{
    int n;
    printf("enter a number n:");
    scanf("%d",&n);
    fact(&n);
    return 0;
}
int fact(int *p)
{
    int i=1,res=1;
    while(i<=*p)
    {
        res=res*i;
        i++;
    }
    printf("the factorial of number %d is:%d",*p,res);
    return 0;
}