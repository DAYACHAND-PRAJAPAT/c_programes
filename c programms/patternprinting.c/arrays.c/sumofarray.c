#include<stdio.h>
main()
{
    int a[100],i,sum=0,n;
    printf("enter a number n:");
    scanf("%d",&n);
    printf("enter the elements into array:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum of the array is:%d",sum);
    return 0;
}