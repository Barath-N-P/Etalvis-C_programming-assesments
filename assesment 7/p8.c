#include<stdio.h>
void disp_2digit_even_sum6(int a);
int main()
{
    int a=11;
    disp_2digit_even_sum6(a);
    return 0;
}

void disp_2digit_even_sum6(int a)
{
    for(int i=a;i<100;i++)
    {
        if((i%2==0) && (i%10 + i/10)==6)
        {
        printf("%d\n",i);
        }
    }
}