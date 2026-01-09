#include<stdio.h>
int disp_2digit_ones(int a);
int main(){
    int x=10,y;
    y=disp_2digit_ones(x);
    printf("%d\n",y);
}
int disp_2digit_ones(int a)
{
    int y=0;
    while(a<100)
    {
        if(a%10==5)
        {
            y=a+y;
        }
        a++;
    }
    return y;
}