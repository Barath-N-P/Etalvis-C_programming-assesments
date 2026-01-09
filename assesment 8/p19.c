#include<stdio.h>
int disp_LCM3(int a,int b,int c);
int main()
{
    int a,b,c,y;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    y=disp_LCM3(a,b,c);
    printf("%d\n",y);
    return 0;
}
int disp_LCM3(int a,int b,int c)
{
    int m;
    m=(a>b)?a:b;
    m=(m>c)?m:c;
    while(1)
    {
        if(m%a==0 && m%b==0 && m%c==0)
        {
            return m;
        }
        m++;
    }
}