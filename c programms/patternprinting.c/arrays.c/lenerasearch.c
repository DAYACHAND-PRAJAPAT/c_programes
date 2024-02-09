#include<stdio.h>
int main()
{
    int a[100],i,n,loc,item;
    printf("enter a number n:");
    scanf("%d",&n);
    printf("enter the elements into an array:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element which you want to search:");
    scanf("%d",&item);
    for(i=0;i<=n-1;i++)
    {
        if(item==a[i])
        {
            loc=i;
            printf("the %d item exist at %d location",item,loc); break;
        }
        if(i==n)
        {
            printf("the %d item does not exist",item);
        }
    }
    return 0;
}