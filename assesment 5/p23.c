#include<stdio.h>
int main()
{
 int x,b,t=0;
 printf("Enter the number: "); 
 scanf("%d",&x);
 loop:
 for(;x>0;){
   b=x%10;
   for(;b==0 || b==1 || b==4 || b==9;) 
   {
    t=t+1;
    break;
   } 
   x=x/10;
   goto loop;
 } 
 printf("%d\n",t);
}