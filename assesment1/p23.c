#include<stdio.h>
int main(){
 int a,b;
 printf("enter the number: ");
 scanf("%d",&a);
 b=((a/100)*100)+(a%10);
 printf("results: %d\n",b);
 return 0;
} 
