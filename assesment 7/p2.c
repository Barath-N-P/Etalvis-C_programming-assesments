#include<stdio.h>
void disp_descend(int a)
int main()
{
    int a=5;
    disp_descend(a);
    return 0;
}
void disp_descend(int a)
{
    for(int i=a;i>0;i--)
    {
        printf("%d\n",i);
    }
}