#include<stdio.h>
int disp_2digit_even_sum6(int a);
int main(){
    int x=1,y;
    y=disp_2digit_even_sum6(x);
    printf("%d\n",y);
}
int disp_2digit_even_sum6(int a)
{
    int y=0;
    while(a<10)
    {
      if(a==2 || a==3 || a==5 || a==7)
       {
          y=y+1;
       }
       a++;
    }  
    return y;
}