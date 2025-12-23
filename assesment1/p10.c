#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the number: ");
  scanf("%d",&a);
  b=a/10;
  printf("its ten's digit from right is: %d\n",b%10);
  return 0;
}
