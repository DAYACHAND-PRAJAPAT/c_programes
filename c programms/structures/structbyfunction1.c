#include<stdio.h>
#include<string.h>
void display(char*,char*,int);
int main()
{
    struct book
    {
        char name[20];
        char author[20];
        int price;
    };
    struct book b={"luc","ypk",400};
    display(b.name,b.author,b.price);
    return 0;
}
void display(char *s,char *p,int n)
{
    printf("%s\n%s\n%d",s,p,n);
    return 0;
}
