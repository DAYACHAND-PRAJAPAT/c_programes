#include<stdio.h>
int add(int*,int*);
int main()
{
    int a=10;
    int b=10;
    add(&a,&b);
    return 0;
}
int add(int *p,int *q)
{ int c;
 c=*p+*q;
 printf("%d",c);
 return 0;
};