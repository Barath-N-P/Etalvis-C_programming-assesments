#include<stdio.h>
int main()
{
    int a;
    a=9999;
    loop:
    while(a>1000)
    {
        if((a%7==0) && (a%9==0))
        {
            printf("%d\n",a);
            return 0;
        }
        a--;
        goto loop;
        
    }
    
    return 0;
}