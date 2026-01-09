#include<stdio.h>
int disp_two_digit_square(int a);
int main(){
    int x,y;
    printf("Enter the number:");
    scanf("%d",&x);
    y=disp_two_digit_square(x);
    printf("%d\n",y);
}
int disp_two_digit_square(int a)
{
    int y=0;
    while(a>10)
    {
      if((a%100)==16 || (a%100)==25 || (a%100)==36 || (a%100)==49 || (a%100)==64 || (a%100)==81)
       {
          y=y+1;
       }
       a=a/10;
    }  
    return y;
}