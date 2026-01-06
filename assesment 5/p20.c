#include<stdio.h>
int main()
{
   int a=2,k=0;
   loop:
   for(;a<10;)
   {
    for(;a==2 || a==3 || a==5 || a==7;)
    {
        k=k+1;
        break;
    }
    a++;
    goto loop;
   }
   printf("%d\n",k);
}