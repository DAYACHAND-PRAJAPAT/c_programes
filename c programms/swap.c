#include<stdio.h>
main()
{
    int a=10;
    int b=20;
    int c;
    c=a;
    a=b;
    b=c;
    printf("the swapped values of a and b is:a=%d\nb=%d",a,b);
    return 0;
}