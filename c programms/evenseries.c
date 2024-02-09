#include<stdio.h>
main()
{
   int n,i;
   printf("enter  number n:");
   scanf("%d",&n);
   i=1;
   while(i<=n)
   {
    if(i%2==0)
    {
        printf("%d",i);
    }
    i++;
   }
   return 0;
}