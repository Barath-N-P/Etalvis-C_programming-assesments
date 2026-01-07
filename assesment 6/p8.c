#include<stdio.h>
int main()
{
    int a=11;
    loop:
    while(a<100)
    {
        if(((a%10)+(a/10))==6 &&  (a%2)==0)
        {
             printf("%d\n",a);
        }   
        a++;
        goto loop;
    }
    return 0;

}