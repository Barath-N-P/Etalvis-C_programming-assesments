#include<stdio.h>
void disp_2digit_even_sum6(int a);
int main()
{
    int a=1;
    disp_2digit_even_sum6(a);
    return 0;
}

void disp_2digit_even_sum6(int a)
{
    int k=a,i=0;
    while(k<10)
    {
        if(k==3 || k==2 || k==5 || k==7)
        {
          i=i+1;
        }
        k++;
    }
    printf("%d\n",i);
    
         
}