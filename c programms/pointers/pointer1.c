#include<stdio.h>
main()
{
    int a=20;
    int *b=&a;
    int **c=&b;
    printf("%d %d %d",a,b,c);
    printf("\n%d %d %d",&a,&b,&c);
    printf("\n%d %d",*b,**c);
}