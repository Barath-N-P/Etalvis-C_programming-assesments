#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the number: ");
  scanf("%d",&a);
  b=((a/1000)*1000)+(((a/100)%10)*100);
  printf("its first two digits: %d\n",b+((a%10)*10)+((a%100)/10));
  return 0;
}
