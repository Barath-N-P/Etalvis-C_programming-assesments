#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the number: ");
  scanf("%d",&a);
  b=(a%100);
  printf("its reverse order is: %d\n",((b/10)*10)+(a/100)+((a%10)*100));
  return 0;
}
