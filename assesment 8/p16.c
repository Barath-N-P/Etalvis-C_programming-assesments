#include<stdio.h>
int disp_biggest_4digit_div7_9(int a);
int main(){
    int x=9999,y;
    y=disp_biggest_4digit_div7_9(x);
    printf("%d\n",y);
}
int disp_biggest_4digit_div7_9(int a)
{
    int y=0;
    while(a>1000)
    {
      if((a%7)==0 && (a%9)==0)
       {
          return a;
       }
       a--;
    }  
}