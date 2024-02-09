#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b[100]; 
    printf("enter name price and pages:");
    for(int i=0;i<=99;i++)
    {
        scanf("%c%f%d",&b[i].name,&b[i].price,&b[i].pages);
    }
    for(int i=0;i<=99;i++)
    {
        printf("%c\n%f\n%d",b[i].name,b[i].price,b[i].pages);
    }
    return 0;
}