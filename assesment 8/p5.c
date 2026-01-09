#include<stdio.h>
int count_total_digits(int a);
int main(){
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=count_total_digits(x);
    printf("%d\n",y);
}
int count_total_digits(int a)
{
    int y=0;
    while(a>0)
    {
        y=y+1;
        a=a/10;
    }
    return y;
}