#include<stdio.h>
int main()
{
  int a,b,c,d,e;
  printf("Enter the number: ");
  scanf("%d",&a);
  b=(a/100);
  d=a%100;
  e=(d/10)*10;
  c=b*100;
  printf("three digit number make one's digit as 2: %d \n",e+c+2);
  return 0;
}
