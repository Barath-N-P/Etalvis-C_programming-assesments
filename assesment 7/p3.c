#include<stdio.h>
void disp_sum(int a);
int main()
{
    int a=1;
    disp_sum(a);
    return 0;
}

void disp_sum(int a)
{
    int k=0;
    for(int i=a;i<6;i++)
    {
        k=k+i;
    }
    printf("%d\n",k);
}