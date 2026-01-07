#include<stdio.h>
int main()
{
    int a=1,k=0;
    loop:
    while(a<10)
    {
        if(a==2 || a==3 || a==5 || a==7)
        {
            k=k+1;
        }
        a++;
        goto loop;
    }
    printf("%d\n",k);
    return 0;

}