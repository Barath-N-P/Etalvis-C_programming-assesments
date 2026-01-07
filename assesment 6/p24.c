#include<stdio.h>
int main()
{
    int a,k=0,t;
    printf("Enter the number: ");
    scanf("%d",&a);
    loop:
    while(a>0)
    {
        t=a%100; 
        if(t==16 || t==25 || t==36 || t==49 || t==64 || t==81)
        {
            k=k+1;
        }
        a=a/10;
        goto loop;
    }
    printf("%d\n",k);
    return 0;

}