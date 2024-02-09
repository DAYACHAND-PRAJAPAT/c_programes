#include<stdio.h>
main()
{
    int n;
    printf("enter a number n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int s=n;s>i;s--)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}