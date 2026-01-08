#include<stdio.h>
void disp_rsum(int a);
int main()
{
    int a=6;
    disp_rsum(a);
    return 0;
}

void disp_rsum(int a)
{
    int k=0;
    for(int i=a;i>0;i--)
    {
        k=k+i;
    }
    printf("%d\n",k);
}