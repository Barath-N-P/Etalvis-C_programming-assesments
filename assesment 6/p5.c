#include<stdio.h>
int main()
{
    int a=1;
    loop:
    while(a<10)
    {
        printf("%d\n",a);
        a=a+2;
        goto loop;
    }
    return 0;

}