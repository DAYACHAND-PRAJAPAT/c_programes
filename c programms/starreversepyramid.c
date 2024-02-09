#include<stdio.h>
main()
{
    int i,j,s,n;
    printf("enter a number n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<i;s++)
        {
            printf(" ");
        }
        for(j=n;j<=2*i-1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}