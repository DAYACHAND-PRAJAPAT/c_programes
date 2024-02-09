#include<stdio.h>
void display(int*,int);
int main()
{
    int n;
    int a[100];
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter the elements into array:");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    display(&a[0],n);
    return 0;
}
void display(int *p,int q)
{   int sum=0;
    printf("the esum of array is:");
    for(int i=0;i<=q-1;i++)
    {
        sum=sum+*p;
        p++;
    }
    printf("%d",sum);
    return 0;
} 