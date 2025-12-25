#include<stdio.h>
int main()
{
  int a=1,b=0;
  loop:if(a<6)
  { 
    b=b+a;
    a=a+1;
    goto loop;
  }
  printf("%d\n",b);
  return 0;
}
