#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        char name[20];
        int  math_marks;
        int  comp_marks;
    };
    struct student s1={"ajay",85,95};
    struct student s2={"vijay",94,84};
    printf("name:%s\nmaths:%d\ncmp:%d",s1.name,s1.math_marks,s1.comp_marks);
    printf("\nname:%s\nmaths:%d\ncmp:%d",s2.name,s2.math_marks,s2.comp_marks);
    return 0;
}