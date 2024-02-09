#include<stdio.h>
#include<string.h>
int main()
{
    struct emp
    {
        char name[20];
        float salary;
        int age;
    }
    e2,e3;
    struct emp e1={"daya",2000000,23};
    strcpy(e2.name,e1.name);
    e2.age=e1.age;
    e2.salary=e1.salary;
    e3=e2;
    printf("%s %f %d",e1.name,e1.salary,e1.age);
    printf("\n%s %f %d",e2.name,e2.salary,e2.age);
    printf("\n%s %f %d",e3.name,e3.salary,e3.age);
    return 0;
}