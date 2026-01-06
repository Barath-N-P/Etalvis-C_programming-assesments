#include<stdio.h>
int main()
{
    int a,t,n=1,k;
    printf("Enter the number: ");
    scanf("%d",&a);
    t=a;
    loop:
    for(;a>0;)
    {
        n=n*10;
        a=a/10;
        goto loop;
    }
    k=n/10;
    printf("%d\n",(k*(t%10))+(t/10));
}