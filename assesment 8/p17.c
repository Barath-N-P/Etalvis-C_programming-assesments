#include<stdio.h>
int disp_count_sum14(int a);
int main(){
    int x=10,y;
    y=disp_count_sum14(x);
    printf("%d\n",y);
}
int disp_count_sum14(int a)
{
    int y=0,t,k=0;
    while(a<100000)
    {
        t=a;
        y=0;
        while(t>0)
        {
            y=y+(t%10);
            t=t/10;
        }
        if(y==14)
        {
            k=k+1;
        }
        a++;
    }  
    return k;
}