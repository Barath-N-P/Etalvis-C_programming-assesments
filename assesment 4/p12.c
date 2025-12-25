#include<stdio.h>
int main()
{
  int a,b=0;
  printf("Enter the number: ");
  scanf("%d",&a);
  loop:if(a>0)
  { 
    
    {
       b=b+(a%10);
       a=a/10;
       
       goto loop;
    }
    
  }
  printf("result: %d\n",b);
  return 0;
}
