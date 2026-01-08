#include<stdio.h>
void disp_2digit_odd_sum_tens7(int a);
int main()
{
    int a=10;
    disp_2digit_odd_sum_tens7(a);
    return 0;
}

void disp_2digit_odd_sum_tens7(int a)
{
    int k=0;
    for(int i=a;i<100;i++)
    {
        if((i/10)==7  && (i%2)==1 )
        {
              k=k+i;
        }
        
    }
    printf("%d\n",k);
}