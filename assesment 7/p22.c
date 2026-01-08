#include<stdio.h>
void disp_total_2digit_odd(int a);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    disp_total_2digit_odd(a);
    return 0;
}

void disp_total_2digit_odd(int a)
{
    int k=a,i=0;
    while(k>10)
    {
        if((k%100)%2==1)
        {
          i=i+1;
        }
        k=k/10;
    }
    printf("%d\n",i);
   
   
}