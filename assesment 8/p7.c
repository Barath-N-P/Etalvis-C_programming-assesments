#include<stdio.h>
int disp_reverse_number(int a);
int main(){
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_reverse_number(x);
    printf("%d\n",y);
}
int disp_reverse_number(int a)
{
    int y=0;
    while(a>0)
    {
        y=(y*10)+(a%10);
        a=a/10;
    }
    return y;
}