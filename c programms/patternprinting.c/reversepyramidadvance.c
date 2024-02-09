#include<stdio.h>
main()
{
    int n,i,j,k,s;
    printf("enter a number n:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(s=n;s>i;s--)
        {
            printf(" ");
        }
        for(j=1;j<=n;j--)
        {
            printf("%d",j);
        }
        for(k=i-1;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}