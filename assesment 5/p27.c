#include<stdio.h>
int main(){
    int a=58,n=0,t,k=0;
    loop:
    for(;a<100000;)
    {
        t=a;
        n=0;
        koop:
        for(;t>0;)
        {
            n=(t%10)+n;
            t=t/10;
            goto koop;
        }
        for(;n==14;)
        {
           k=k+1;
           break;
        }
        a++;
        
        goto loop;

    }
    printf("%d\n",k);

     
}