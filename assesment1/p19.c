#include<stdio.h>
int main(){
 int a,g,f,b;
 printf("enter the number: ");
 scanf("%d",&a);
 b=((a%100)/10)%2; 
 printf("result: %d",a-(5*b));
 return 0;
} 
