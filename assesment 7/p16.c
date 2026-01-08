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
    int k=2,i=0;
    while(k<a)
    {
        if(a%k==0)
        {
         i=1;
         break;
        }
        k++;
    }
    if(i==0)
    {
         printf("its prime\n"); 
    }
    else{
        printf("its not prime\n");
    }
}