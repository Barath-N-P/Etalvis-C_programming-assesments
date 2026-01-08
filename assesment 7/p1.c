#include<stdio.h>
void disp_assend(int a);
int main()
{
    int a=1;
    disp_assend(a);
    return 0;
}
void disp_assend(int a)
{
    for(int i=a;i<6;i++)
    {
        printf("%d\n",i);
    }
}
