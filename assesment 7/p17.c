#include<stdio.h>
void check_prime(int a);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    check_prime(a);
    return 0;
}

void check_prime(int a)
{
    int k=2,i=0,t=a,sum=0;
    while(k<a)
    {
        if(a%k==0)
        {
         i=1;
         break;
        }
        k++;
    }
    while(a>0)
    {
        sum=sum+(a%10);
        a=a/10;
    }
    if(i==0 && sum==14)
    {
         printf("its prime and sum of digits is 14\n"); 
    }
    if(i==1 && sum==14)
    {
         printf("its not prime and sum of digits is 14\n"); 
    }
    if(i==1 && sum!=14)
    {
         printf("its not prime and sum of digits is not 14\n"); 
    }
    if(i==0 && sum!=14)
    {
         printf("its prime and sum of digits is not 14\n"); 
    }
    
}