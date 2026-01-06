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
    for(;((t%10)%2)==1;)
    {
        printf("%d\n",(((t/k)-1)*k)+(t%k));
        return 0;
    }
    printf("%d\n",t);
    return 0;
}