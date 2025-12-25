#include<stdio.h>
int main()
{
  int a=10,b=0;
  loop:if(a<=99)
  { 
    if(((a/10)==7) && ((a%10)%2==1))
    {
         b=b+a;
    }
    a=a+1;
    goto loop;
  }
  printf("result: %d\n",b);
  return 0;
}
