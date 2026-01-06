#include<stdio.h>
int main()
{
    int a=10,h=0; 
    loop: 
    for(;a<100;)
    {
        for(;((a%10))==5;)
        {
            h=h+a;
            break;
        }
        
        a++;
        goto loop;
    }
    printf("%d\n",h);
    return 0;
    
}