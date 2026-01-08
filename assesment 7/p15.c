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
    int k=1,i=a;
    while(a>10)
    {
        k=k*10;
        a=a/10;
    }
    if((i/k)%2==1)
    {
    printf("%d\n",(k*((i/k)-1)+((i%k))));
    }
    else
    {
        printf("%d\n",i);
    }
}