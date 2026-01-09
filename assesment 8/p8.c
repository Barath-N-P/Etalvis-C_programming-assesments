#include<stdio.h>
int disp_interchange_first_last_digit(int a);
int main(){
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_interchange_first_last_digit(x);
    printf("%d\n",y);
}
int disp_interchange_first_last_digit(int a)
{
    int h=1,u,y=a;
    while(a>10)
    {
        h=(h*10);
        a=a/10;
    }
    u=((y%10)*h)+(((y/10)%(h/10))*10)+(y/h);
    return u;
}