#include<stdio.h>
void display(int*,int*,int*,int,int);
int main()
{
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int c[2][2];
    display(&a[0][0],&b[0][0],&c[0][0],2,2);
    return 0;
}
void display(int *p,int *q,int *b,int r,int s)
{
    for(int i=0;i<=r-1;i++)
    {
        for(int j=0;j<=s-1;j++)
        {
           *b=*p+*q; 
           p++;
        }
        q++;
       printf("\n"); 
    }
    printf("the aded matrix is:");
    for(int i=0;i<=r-1;i++)
    {
       for(int j=0;j<=s-1;j++)
       {
        printf(" %d",*b);
        b++;
       }
       printf("\n");
    }
    return 0;
}
