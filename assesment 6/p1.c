#include<stdio.h>
int main()
{
    int a=1;
    loop:
    while(a<6)
    {
        printf("%d\n",a);
        a++;
        goto loop;
    }
    return 0;

}