#include<stdio.h>
void disp_biggest_4digit_div7_9(int a);
int main()
{
    int a=9999;
    disp_biggest_4digit_div7_9(a);
    return 0;
}

void disp_biggest_4digit_div7_9(int a)
{
    int k=a,i=0;
    while(k>1000)
    {
        if((k%7)==0 && (k%9)==0)
        {
          printf("%d\n",k);
          goto end;
        }
        k--;
    }
    end:
}