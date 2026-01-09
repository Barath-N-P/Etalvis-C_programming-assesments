#include<stdio.h>
int disp_single_digit_square(int a);
int main(){
    int x,y;
    printf("Enter the number:");
    scanf("%d",&x);
    y=disp_single_digit_square(x);
    printf("%d\n",y);
}
int disp_single_digit_square(int a)
{
    int y=0;
    while(a>0)
    {
      if((a%10)==1 || (a%10)==4 || (a%10)==9)
       {
          y=y+1;
       }
       a=a/10;
    }  
    return y;
}