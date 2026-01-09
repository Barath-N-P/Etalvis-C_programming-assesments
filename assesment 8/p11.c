#include<stdio.h>
int disp_total_odd_digits(int a);
int main(){
    int x,y;
    printf("Enter the number:");
    scanf("%d",&x);
    y=disp_total_odd_digits(x);
    printf("%d\n",y);
}
int disp_total_odd_digits(int a)
{
    int y=0;
    while(a>0)
    {
      if((a%2)==1)
       {
          y=y+1;
       }
       a=a/10;
    }  
    return y;
}