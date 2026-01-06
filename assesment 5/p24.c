#include<stdio.h>
int main()
{
 int x,b,t=0;
 printf("Enter the number: "); 
 scanf("%d",&x);
 loop:
 for(;x>9;){
   b=x%100;
   for(;b==16 || b==25 || b==36 || b==49 || b==64 || b==81 ;)
   {
    t=t+1;
    break;
   } 
   x=x/10;
   goto loop;
 } 
 printf("%d\n",t);
}