#include<stdio.h>
int main()
{
    int a=11;
    loop:
    while(a<100)
    {
        if(((a%10)+(a/10))==7 &&  (a%2)==1)
        {
             printf("%d\n",a);
        }   
        a++;
        goto loop;
    }
    return 0;

}