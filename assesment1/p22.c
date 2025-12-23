#include<stdio.h>
int main(){
 int a,g,f,b;
 printf("enter the number: ");
 scanf("%d",&a);
 g=(a%10)+(a/100)+((a%100)/10);
 if(g>=10 && g<=99)
 {
  f=(g%10)+(g/10);
  if(g>=10 && g<=99)
  {
    b=(f%10)+(f/10);
    printf("result: %d\n",b);
  }
  else
   {
     printf("result: %d\n",f);
   }
  }
  else{
     printf("results: %d\n",g);
     }
 return 0;
} 

