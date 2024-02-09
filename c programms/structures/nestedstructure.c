#include<stdio.h>
#include<string.h>
int main()
{
    struct address
    {
        char phone[20];
        char city[20];
        int pin;
    };
    struct name
    {
        char name1[20];
        char name2[20];
    };
    struct emp
    {
        struct name n;
        struct address a;
    };
    struct emp e={"amit","kumar","501978","alwar",301026};
    printf("%s %s\n%s\n%s\n%d",e.n.name1,e.n.name2,e.a.phone,e.a.city,e.a.pin);
    return 0;
}