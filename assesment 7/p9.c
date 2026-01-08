#include<stdio.h>
void disp_2digit_ones5(int a);
int main()
{
    int a=10;
    disp_2digit_ones5(a);
    return 0;
}

void disp_2digit_ones5(int a)
{
    int k=0;
    for(int i=a;i<100;i++)
    {
        if((i%10)==5)
        {
              k=k+i;
        }
        
    }
    printf("%d\n",k);
}