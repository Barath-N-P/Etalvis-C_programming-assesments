#include<stdio.h>
int main()
{
   int a,k=0;
   printf("Enter the number: ");
   scanf("%d",&a);
   loop:
   for(;a>10;)
   {
     for(;((a%100)%2)==1;)
     {
        k=k+1;
        break;
     }
     a=a/10;
     goto loop;
    }
   printf("%d\n",k);
}