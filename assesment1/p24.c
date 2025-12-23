#include<stdio.h>
int main(){
 int a,b;
 printf("enter the number: ");
 scanf("%d",&a);
 b=(a%100)+((a/1000)*100)+(((a/100)%10)*1000);
 printf("result: %d\n",b);
 return 0;
} 

