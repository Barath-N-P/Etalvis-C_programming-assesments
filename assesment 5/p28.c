#include<stdio.h>
int main()
{
    int a,b,x,k,l=1;
    printf("Enter the numbers: ");
    scanf("%d  %d",&a,&b );
    for(;a>b;)
    {
        x=a;
        break;
    }
    for(;b>a;)
    {
        x=b;
        break;
    }
    k=x;
    loop:
    for(;l==1;)
    {
        for(;(x%a)==0 && (x%b)==0;)
        {
            goto escape;
        }
        x=x+k;
        goto loop;
    }
    escape:
    for(;x>0;)
    {
        break;
    }
    printf("%d\n",x);
    return 0;

}