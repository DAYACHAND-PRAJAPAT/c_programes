#include<stdio.h>
int main()
{
    int i,j,a[100],b[100],c[100],n;
    printf("enter a number n:");
    scanf("%d",&n);
    printf("enter the elements into array A:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements into array B:");
    for(j=0;j<=n-1;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0,j=0;i<=n-1,j<=n-1;i++,j++)
    {
        c[i]=a[i]+b[j];
    }
    printf("the added array is:");
    for(i=0;i<=n-1;i++)
    { 
        printf(" %d",c[i]);
    }
    return 0;
}