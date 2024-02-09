#include<stdio.h>
int swap (int*,int*);
int main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("the swapped value of a is:%d and b is:%d",a,b);
    return 0;
}
int swap(int *p,int *q)
{
    int s;
    s=*p;
    *p=*q;
    *q=s;
    return 0;
}