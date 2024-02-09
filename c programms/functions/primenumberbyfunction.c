#include<stdio.h>
int isprime(int);
int main()
{
    int n;
    printf("enter a number n:");
    scanf("%d",&n);
    isprime(n);
    return 0;
}
int isprime(int p)
{    
    for(int i=2;i<=p/2;i++)
    {
        if(p%i!=0)
        {
            printf("the %d is a prime number",p); break; 
        } 
        else
        {
            printf("the %d is non prime number",p); break;
        }
    }
    return 0;
}