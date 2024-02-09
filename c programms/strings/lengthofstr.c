#include<stdio.h>
#include<string.h>
int strlenx(char*);
int main()
{
    char s1[100];
    printf("enter a string:");
    scanf("%s",s1);
    strlenx(s1);
    return 0;
}
int strlenx(char *s1)
{
   int l=0;
   while(*s1!='\0')
   {
      l++;
   } 
   printf("the length of string is:%d",l);
   return 0;
}