#include<stdio.h>
int main()
{
  int a=6,b=0;
  loop:if(a>0)
  { 
    b=b+a;
    a=a-1;
    goto loop;
  }
  printf("%d\n",b);
  return 0;
}
