#include<stdio.h>
int main()
{
  int a,b,c=0;
  printf("Enter the number: ");
  scanf("%d",&a);
  loop:if(a>0)
  { 
    
    {
       b=a%10;
       c=(c*10)+b;
       a=a/10;
       goto loop;
    }
    
  }
  printf("result: %d\n",c);
  return 0;
}
