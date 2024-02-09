#include<stdio.h>
void display (int*,int);
int main()
{
    int a[]={10,20,30,40,50};
    display(&a[0],5);
    return 0;
}
void display (int *p,int n)
{
    int i=0;
    while(i<=n)
    {
        printf("%d\n",*p);
        i++;
        p++;
    }
    return 0;
};