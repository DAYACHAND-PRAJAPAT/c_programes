#include<stdio.h>
int main()
{
    int i,j,m,n;
    int a[100][100];
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
    printf("the transpose of matrix A is:");
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            printf(" %d",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}