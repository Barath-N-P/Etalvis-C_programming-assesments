#include<stdio.h>
int main()
{
    int a=5;
    loop:
    while(a>0)
    {
        printf("%d\n",a);
        a--;
        goto loop;
    }
    return 0;

}