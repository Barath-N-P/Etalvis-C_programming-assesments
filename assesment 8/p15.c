#include<stdio.h>
int disp_single_digit_prime(int a);
int main(){
    int x,y;
    printf("Enter the number:");
    scanf("%d",&x);
    y=disp_single_digit_prime(x);
    printf("%d\n",y);
}
int disp_single_digit_prime(int a)
{
    int y=0;
    while(a>0)
    {
      if((a%10)==2 || (a%10)==3 || (a%10)==5 || (a%10)==7)
       {
          y=y+1;
       }
       a=a/10;
    }  
    return y;
}