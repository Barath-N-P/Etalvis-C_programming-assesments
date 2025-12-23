#include<stdio.h>
int main()
{
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  printf("make tens digit as 1: %d\n",(a%10)+10);
  return 0;
}
