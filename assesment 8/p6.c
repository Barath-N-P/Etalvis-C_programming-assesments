#include<stdio.h>
int count_sum_all__digits(int a);
int main(){
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=count_sum_all__digits(x);
    printf("%d\n",y);
}
int count_sum_all__digits(int a)
{
    int y=0;
    while(a>0)
    {
        y=y+(a%10);
        a=a/10;
    }
    return y;
}