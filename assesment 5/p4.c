#include<stdio.h>
int main()
{
    int a=6,h=0; 
    loop:
    for(;a>0;)
    {
        h=h+a;
        a--;
        goto loop;
    }
    printf("%d\n",h);
    return 0;
    
}