#include<stdio.h>
void disp_odd(int a);
int main()
{
    int a=1;
    disp_odd(a);
    return 0;
}

void disp_odd(int a)
{
    for(int i=a;i<10;i++)
    {
        if(i%2==1)
        {
        printf("%d\n",i);
        }
    }
}