#include<stdio.h>
main()
{
    int i,j,t;
    int a[5]={1,3,5,4,2};
    for(i=0;i<=4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }

    }
    for(j=0;j<5;j++)
    {
        printf(" %d",a[j]);
    }
    return 0;
}