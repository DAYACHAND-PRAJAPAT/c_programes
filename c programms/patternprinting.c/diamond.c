#include<stdio.h>
main()
{
    int i,j,k,s;
    int n;
    printf("enter a number n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=i;s<=n;s++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(s=n;s>=i;s--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}