#include<stdio.h>
main()
{
    int a=9;
    int *ptr1;
    ptr1= &a;
    printf("%u",ptr1);
    ptr1++;
    printf("\n%u",ptr1);
    return 0;
}