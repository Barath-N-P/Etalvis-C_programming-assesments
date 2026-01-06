#include<stdio.h>
int main()
{
    int a=10; 
    loop: 
    for(;a<100;)
    {
        for(;((a%10)+(a/10))==6;)
        {
            printf("%d\n",a);
            break;
        }
        
        a=a+2;
        goto loop;
    }
    return 0;
    
}