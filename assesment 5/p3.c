#include<stdio.h>
int main()
{
    int a=1,h=0; 
    loop:
    for(;a<6;)
    {
        h=h+a;
        a++;
        goto loop;
    }
    printf("%d\n",h);
    return 0;
    
}