#include<stdio.h>
void disp_count_HCF2(int a,int b);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    disp_count_HCF2(a,b);
    return 0;
}
void disp_count_HCF2(int a,int b)
{
    int m;
    m=(a>b)?a:b;
    while(m>=1)
    {
        if(a%m==0 && b%m==0)
        {
            printf("%d\n",m);
            break;
        }
        m--;
    }
}