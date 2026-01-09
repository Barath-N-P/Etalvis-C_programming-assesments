#include<stdio.h>
int disp_rsum(int a);
int main(){
    int x=6,y;
    y=disp_rsum(x);
    printf("%d\n",y);
}
int disp_rsum(int a)
{
    int y=0;
    while(a>0)
    {
        y=a+y;
        a--;
    }
    return y;
}