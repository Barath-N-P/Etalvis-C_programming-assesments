#include<stdio.h>
int disp_sum(int a);
int main(){
    int x=1,y;
    y=disp_sum(x);
    printf("%d\n",y);
}
int disp_sum(int a)
{
    int y=0;
    while(a<6)
    {
        y=a+y;
        a++;
    }
    return y;
}
