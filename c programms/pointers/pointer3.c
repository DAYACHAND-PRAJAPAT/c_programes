#include<stdio.h>
int main()
{
    int *p,i;
    int a[5]={10,20,30,40,50};
    p=&a[0];
    i=0;
    while(i<=5)
    {
        printf("%u",p);
        printf("\n%u",*p);
        i++;
        p++;
    }
    return 0;
}