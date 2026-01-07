#include<stdio.h>
int main()
{
    int a,k,l,p;
    l= 0;
    a=10;
    while(a<100000)
    {
        k=a;
        p=0;
        while(k>0)
        {
            p=p+(k%10);
            k=k/10;
        }
        if(p==14)
        {
            l=l+1;
        }
        a++;
    }
    printf("%d",l);
}