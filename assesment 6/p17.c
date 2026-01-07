#include<stdio.h>
int main()
{
    int a,k=0,let=0,i=2;
    printf("Enter the number: ");
    scanf("%d",&a);
    loop:
    while(i<a)
    {
        if((a%i)==0)
        {
            let=1;
        }
        i++;
        goto loop;
    }
    loop1:
    while(a>0)
    {
        k=(a%10)+k;
        a=a/10;
        goto loop1; 
    }
    if(let==0 && k==14)
    {
        printf("its prime and sum of digit is 14\n");
    }

    if(let==1 && k==14)
    {
        printf("its not prime and sum of digit is 14\n");
    }

    if(let==0 && k!=14)
    {
        printf("its prime and sum of digit is not 14\n");
    }
    if(let==1 && k!=14)
    {
         printf("its not prime and sum of digit is not 14\n");
    }
    return 0;

}