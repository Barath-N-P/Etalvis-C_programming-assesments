#include<stdio.h>
int disp_total_odd_2digits(int a);
int main(){
    int x,y;
    printf("Enter the number:");
    scanf("%d",&x);
    y=disp_total_odd_2digits(x);
    printf("%d\n",y);
}
int disp_total_odd_2digits(int a)
{
    int y=0;
    while(a>10)
    {
      if((a%100)%2==1)
       {
          y=y+1;
       }
       a=a/10;
    }  
    return y;
}