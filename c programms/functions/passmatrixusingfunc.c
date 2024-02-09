#include<stdio.h>
void display(int*,int,int);
int main()
{  
    int a[2][2]={{1,2},{3,4}};
    display(&a[0][0],2,2);
    return 0;
}
void display(int *p,int q,int r)
{ 
    printf("the matrix is:");
    for(int i=0;i<=q-1;i++)
    {
        for(int j=0;j<=r-1;j++)
        {
            printf(" %d",*p);
            p++;
        }
        
        printf("\n");
    }
    return 0;
}