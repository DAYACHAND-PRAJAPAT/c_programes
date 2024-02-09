#include<stdio.h>
#include<string.h>
int main()
{
    struct emp 
    {
        char name[10];
        int salary;
        int age;
    };
    struct emp e1={"devi ram",8000000,35};
    printf("name:%s",e1.name);
    printf("\nsalary:%d",e1.salary);
    printf("\nage:%d",e1.age);
    return 0;
}