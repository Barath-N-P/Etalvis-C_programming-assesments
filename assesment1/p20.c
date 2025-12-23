#include<stdio.h>
int main(){
 int a,g,f,b;
 printf("enter the number: ");
 scanf("%d",&a);
 g=(a%10)+(a/10);
 b=g%2;
 printf("result: %d\n",a-(5*b));
 return 0;
} 
