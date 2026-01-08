#include<stdio.h>
void middle_2digits_prime(int a);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    middle_2digits_prime(a);
    return 0;
}

void middle_2digits_prime(int a)
{
    int k=2,i=0;
    while(k<((a%1000)/10))
    {
        if(((a%1000)/10)%k==0)
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