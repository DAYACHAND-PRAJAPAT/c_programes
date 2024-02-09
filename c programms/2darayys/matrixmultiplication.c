#include<stdio.h>
int main()
{
    int n,i,j,k;
    int a[100][100],b[100][100],c[100][100];
    printf("enter the dimension of the array:");
    scanf("%d",&n);
    printf("enter the elements into matrix A:");
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements into matrix B:");
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            c[i][j]=0;
        for(k=0;k<=n-1;k++)
        {
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        }
        }
    }
    printf("the multiplied matrix is:");
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}