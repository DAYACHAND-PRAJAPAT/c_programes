#include<stdio.h>
int main()
{
    int i,j,m,n;
    int a[100][100],b[100][100],c[100][100];
    printf("enter the dimension of the matrix:");
    scanf("%d%d",&m,&n);
    printf("enter the elements into matrix A:");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements into matrix B:");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the added matrix is:");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}