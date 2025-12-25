#include<stdio.h>
int main()
{
  int a=1;
  loop:if(a<6)
  { 
    printf("%d\n",a);
    a=a+1;
    goto loop;
  }
  return 0;
}
