#include<stdio.h>
void disp_sum_all_digits(int a);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    disp_sum_all_digits(a);
    return 0;
}

void disp_sum_all_digits(int a)
{
    int k=0;
    while(a>0)
    {
        k=k+(a%10);
        a=a/10;
    }
    printf("%d\n",k);
    
}