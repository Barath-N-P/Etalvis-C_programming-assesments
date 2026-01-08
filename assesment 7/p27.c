#include<stdio.h>
void disp_count_sum14(int a);
int main()
{
    int a=10;
    disp_count_sum14(a);
    return 0;
}

void disp_count_sum14(int a)
{
    int k=a,i=0,t,count=0;
    while(k<100000)
    {
        t=k;
        i=0;
        while(t>0)
        {
            i=i+(t%10);
            t=t/10;
        }
        if(i==14)
        {
            count=count+1;
        }
        k++;
    }
    printf("%d\n",count);
   
}