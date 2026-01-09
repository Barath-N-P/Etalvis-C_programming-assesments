#include<stdio.h>
int disp_count_HCF2(int a,int b);
int main()
{
    int a,b,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    y=disp_count_HCF2(a,b);
    printf("%d\n",y);
    return 0;
}
int disp_count_HCF2(int a,int b)
{
    int m;
    m=(a>b)?a:b;
    while(m>=1)
    {
        if(a%m==0 && b%m==0)
        {
            return m;
        }
        m--;
    }
}