#include<stdio.h>
void count_total_digits(int a);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    count_total_digits(a);
    return 0;
}

void count_total_digits(int a)
{
    int k=0;
    while(a>0)
    {
        k=k+1;
        a=a/10;
    }
    printf("%d\n",k);
}