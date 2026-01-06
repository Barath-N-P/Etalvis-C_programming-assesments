#include<stdio.h>
int main(){
    int a,b,x,t=1,k=0;
    printf("Enter the numbers: ");
    scanf("%d %d",&a,&b);
    for(;a>b;)
    {
        x=b;
        break;
    }
    for(;b>a;)
    {
        x=a;
        break;
    }

    loop:
    for(;t<=x;)
    {
        for(;(a%t)==0 && (b%t)==0;)
        {
            k=t;
            break;
        }
        t++;
        goto loop;
    }
    printf("%d\n",k);
    return 0;

     
}