#include<stdio.h>
main()
{
    int n,a[100];
    int i;
    printf("enter a number n:");
    scanf("%d",&n);
    printf("enter the elements into array:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elements are:");
    for(i=0;i<=n-1;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}