#include<stdio.h>
int check_last_digit_odd(int a);
int main(){
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=check_last_digit_odd(x);
    printf("%d\n",y);
}
int check_last_digit_odd(int a)
{
    int y=1,u,k=a;
    while(a>10)
    {
        y=y*10;
        a=a/10;
    }
    if((k%10)%2==1)
    {
        u=((k/y)-1)*y+(k%y);
        return u;
    } 
    return k;
}