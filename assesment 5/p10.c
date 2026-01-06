#include<stdio.h>
int main()
{
    int a=11,h=0; 
    loop: 
    for(;a<100;)
    {
        for(;((a/10))==7;)
        {
            h=h+a;
            break;
        }
        
        a=a+2;
        goto loop;
    }
    printf("%d\n",h);
    return 0;
    
}