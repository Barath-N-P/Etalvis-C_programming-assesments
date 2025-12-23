#include<stdio.h>
int main()
{
   int a;
   printf("enter the number: ");
   scanf("%d",&a);
   printf("make the one's digit 0: %d\n",(a/10)*10);
   return 0;
}
