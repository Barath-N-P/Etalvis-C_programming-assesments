#include<stdio.h>
int main()
{
    int a,k=0,t;
    printf("Enter the number: ");
    scanf("%d",&a);
    loop:
    while(a>0)
    {
        t=a%10; 
        if(t==3 || t==2 || t==5 || t==7 )
        {
            k=k+1;
        }
        a=a/10;
        goto loop;
    }
    printf("%d\n",k);
    return 0;

}