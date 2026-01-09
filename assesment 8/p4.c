#include<stdio.h>
int disp_2digit_odd_sum_tens7(int a);
int main(){
    int x=10,y;
    y=disp_2digit_odd_sum_tens7(x);
    printf("%d\n",y);
}
int disp_2digit_odd_sum_tens7(int a)
{
    int y=0;
    while(a<100)
    {
        if(a/10==7 && a%2==1)
        {
            y=a+y;
        }
        a++;
    }
    return y;
}