#include<stdio.h>
main()
{
    int a=3,b=2,c;
    char sign;
    printf("enter a sign:");
    scanf("%c",&sign);
    switch(sign)
    {
        case'+': {
            c=a+b;
            printf("the addition of %d and %d is %d",a,b,c); break;
        }
        case'-': {
            c=a-b;
            printf("the substraction of %d and %d is %d",a,b,c); break;
        }
        case'*': {
            c=a*b;
            printf("the multiplication of %d and %d is %d",a,b,c); break;
        }
        case'/': {
            c=a/b;
            printf("the division of %d and %d is %d",a,b,c); break;
        }
        default: {
            printf("wrong operation"); break;
        }
    }
    return 0;
}