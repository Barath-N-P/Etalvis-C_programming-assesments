#include<stdio.h>
int main()
{
    int a,b,c,x,k,l=1;
    printf("Enter the numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    for(;a>b;)
    {
        for(;a>c;)
        {
            x=a;
            break;
        }
        break;
        
    }
    for(;b>a;)
    {
        for(;b>c;)
        {
            x=b;
            break;
        }
        break;
    }
    for(;c>a;)
    {
        for(;c>b;)
        {
            x=c;
            break;
        }
        break;
    }

    k=x;
    loop:
    for(;l==1;)
    {
        for(;(x%a)==0 && (x%b)==0 && (x%c)==0;)
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