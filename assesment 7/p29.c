#include<stdio.h>
void disp_LCM3(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    disp_LCM3(a,b,c);
    return 0;
}
void disp_LCM3(int a,int b,int c)
{
    int m;
    m=(a>b)?a:b;
    m=(m>c)?m:c;
    while(1)
    {
        if(m%a==0 && m%b==0 && m%c==0)
        {
            printf("%d\n",m);
            break;
        }
        m++;
    }
}