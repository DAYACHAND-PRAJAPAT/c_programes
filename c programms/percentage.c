#include<stdio.h>
int main()
{
    int hindi,english,maths,chemistry,physics;
    float obtained_marks,total_marks=500,per;
    printf("enter the five subjects marks:");
    scanf("%d%d%d%d%d",&hindi,&english,&maths,&chemistry,&physics);
    obtained_marks=hindi+english+maths+chemistry+physics;
    per=((obtained_marks/total_marks)*100);
    printf("the percentage is;%f",per);
    return 0;
}