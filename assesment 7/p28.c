#include<stdio.h>
void disp_LCM2(int a,int b);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    disp_LCM2(a,b);
    return 0;
}
void disp_LCM2(int a,int b)
{
    int m;
    m=(a>b)?a:b;
    while(1)
    {
        if(m%a==0 && m%b==0)
        {
            printf("%d\n",m);
            break;
        }
        m++;
    }
}