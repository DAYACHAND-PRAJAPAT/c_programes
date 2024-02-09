#include<stdio.h>
main()
{
    int n,i,j;
    printf("enter a number n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c",i+64);
        }
        printf("\n");
    }
    return 0;
}