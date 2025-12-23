#include<stdio.h>
int main()
{
  int a,b,c,d,e,k;
  printf("Enter the number: ");
  scanf("%d",&a);
  b=a/100;
  k=a/10;
  c=k%10;
  d=a%10;
  e=b+c+d;
  printf("its sum is: %d+%d+%d=%d\n",b,c,d,e);
  return 0;
}
