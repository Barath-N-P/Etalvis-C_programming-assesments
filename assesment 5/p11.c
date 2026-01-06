#include<stdio.h>
int main()
{
    int a,n=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    loop:
    for(;a>0;)
    {
        n=n+1;
        a=a/10;
        goto loop;
    }
    printf("%d\n",n);
}