#include<stdio.h>
int main()
{
    int a=1,k=0;
    loop:
    while(a<6)
    {
        k=a+k;
        a++;
        goto loop;
    }
    printf("%d\n",k);
    return 0;

}