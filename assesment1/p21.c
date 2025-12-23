#include<stdio.h>
int main(){
 int a,g,b;
 printf("enter the number: ");
 scanf("%d",&a);
 g=(a%10)%2;
 b=(a/100)%2;
 printf("result: %d\n",a-(5*b*g));
 return 0;
} 
