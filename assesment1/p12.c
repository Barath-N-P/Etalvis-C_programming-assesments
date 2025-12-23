#include<stdio.h>
int main()
{
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  printf("its reverse order is: %d\n",((a%10)*10)+a/10);
  return 0;
}
