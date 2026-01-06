#include<stdio.h>
int main(){
    int a=9999;
    loop:
    for(;a>1000;)
    {
        for(;(a%7)==0  && (a%9)==0 ;)
        {
            printf("%d\n",a);
            a=0;
            break;
        }
        a--;
        
        goto loop;
    }

     
}