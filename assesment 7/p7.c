#include<stdio.h>
void disp_2digit_odd_sum7(int a);
int main()
{
    int a=11;
    disp_2digit_odd_sum7(a);
    return 0;
}

void disp_2digit_odd_sum7(int a)
{
    for(int i=a;i<100;i++)
    {
        if((i%2==1) && (i%10 + i/10)==7)
        {
        printf("%d\n",i);
        }
    }
}