#include<stdio.h>
void disp_2digit_odd_below20(int a);
int main()
{
    int a=11;
    disp_2digit_odd_below20(a);
    return 0;
}

void disp_2digit_odd_below20(int a)
{
    for(int i=a;i<20;i++)
    {
        if(i%2==1)
        {
        printf("%d\n",i);
        }
    }
}