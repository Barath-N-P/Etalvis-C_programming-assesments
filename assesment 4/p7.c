#include<stdio.h>
int main()
{
  int a=11;
  loop:if(a<=99)
  { 
    if(((a%10)+(a/10))==7){
        printf("%d\n",a);
      }
    a=a+2;
    goto loop;
  }
  return 0;
}
