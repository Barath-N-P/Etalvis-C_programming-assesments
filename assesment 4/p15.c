#include<stdio.h>
int main()
{
  int a,b=0,c,k=1,l=1,t=0,h=0;
  printf("Enter the number: ");
  scanf("%d",&a);
  t=a;
  if(((a%10)%2)==1)
  {
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
  k=(t%l)+((t/l)-1)*l;
  printf("result: %d\n",k);
  
 }
 
 else{ 
  printf("result: %d\n",t);
 }
  return 0;
}
