#include<stdio.h>
int main()
{
    int n;
    printf("enter the year:");
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("%d is a leap year",n);
    }
    else
    {
        printf("%d is a aleap year",n);
    }
    return 0;
}