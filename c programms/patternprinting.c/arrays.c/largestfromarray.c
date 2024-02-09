#include<stdio.h>
int main()
{
    int a[100],n,i,max=a[0];
    printf("enter a number n:");
    scanf("%d",&n);
    printf("enter the elements into array:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    } 
    for(i=0;i<=n-1;i++)
    {
        if(max<a[i])
        {
           max=a[i];
        }
    }
    printf("the largest number is:%d",max);
    return 0;
}