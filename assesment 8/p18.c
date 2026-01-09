#include<stdio.h>
int disp_LCM2(int a,int b);
int main()
{
    int a,b,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    y=disp_LCM2(a,b);
    printf("%d\n",y);
    return 0;
}
int disp_LCM2(int a,int b)
{
    int m;
    m=(a>b)?a:b;
    while(1)
    {
        if(m%a==0 && m%b==0)
        {
            return m;
        }
        m++;
    }
}