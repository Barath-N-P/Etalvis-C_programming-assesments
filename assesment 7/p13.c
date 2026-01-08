#include<stdio.h>
void disp_reverse_number(int a);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    disp_reverse_number(a);
    return 0;
}

void disp_reverse_number(int a)
{
    int k=0;
    while(a>0)
    {
        k=(k*10)+(a%10);
        a=a/10;
    }
    printf("%d\n",k);
    
}