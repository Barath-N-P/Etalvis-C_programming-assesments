#include<stdio.h>
void disp_interchange_first_last_digit(int a);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    disp_interchange_first_last_digit(a);
    return 0;
}

void disp_interchange_first_last_digit(int a)
{
    int k=1,i=a;

    while(a>10)
    {
        k=k*10;
        a=a/10;
    }
    printf("%d\n",(k*(i%10))+(((i%k)/10)*10)+(i/k));
    
}