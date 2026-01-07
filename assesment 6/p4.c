#include<stdio.h>
int main()
{
    int a=6,k=0;
    loop:
    while(a>0)
    {
        k=a+k;
        a--;
        goto loop;
    }
    printf("%d\n",k);
    return 0;

}