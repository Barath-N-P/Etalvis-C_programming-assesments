#include<stdio.h>
int main()
{
  int a,b=0,c,k=1,l=1,t;
  printf("Enter the number: ");
  scanf("%d",&a);
  t=a;
  loop:if(a>0)
  { 
    
    {
       a=a/10;
       b=b+1;
       goto loop;
    }
  }
  loop1:if(k<b)
  {
        l=l*10;
        k++;
        goto loop1;
  }
  k=0;
  k=(l*(t%10))+(((t%l)/10)*10)+(t/l);
  printf("result: %d\n",k);
  return 0;
}
