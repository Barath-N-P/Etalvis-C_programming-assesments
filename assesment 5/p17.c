#include<stdio.h>
int main()
{
    int a,n=2,k=0,c=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    loop:
    for(;n<a;)
    {
        for(;(a%n)==0;)
        {
            k=1;
            break;
        }   
        n++;     
        goto loop;
    }
    loop1:
    for(;a>0;)
    {
        c=(a%10)+c;
        a=a/10;
        goto loop1;
    } 
    for(;(k==1) && (c==14);)
    {
        printf("not Prime and sum of digit is 14\n");
        return 0;
    }
    for(;(k!=1) && (c==14);)
    {
        printf("Prime and sum of digit is 14\n");
        return 0;
    }
    for(;(k!=1) && (c!=14);)
    {
        printf("Prime and its sum of digit is not 14\n");
        return 0;
    }
    printf("not Prime and its sum of digit is not 14\n");
    return 0;
}