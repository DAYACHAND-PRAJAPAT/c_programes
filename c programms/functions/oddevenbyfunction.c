#include<stdio.h>
int check(int*);
int main()
{
    int n;
    printf("enter a number n:");
    scanf("%d",&n);
    check(&n);
    return 0;
}
int check(int *p)
{ 
    if(*p%2==0)
    {
        printf("the %d is a even number ",*p);
    }
    else
    {
        printf("the %d is a odd number ",*p);
    }
   
    return 0;
};