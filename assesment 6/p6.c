#include<stdio.h>
int main()
{
    int a=11;
    loop:
    while(a<20)
    {
        printf("%d\n",a);
        a=a+2;
        goto loop;
    }
    return 0;

}