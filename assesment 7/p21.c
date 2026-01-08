#include<stdio.h>
void disp_total_odd_digits(int a);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    disp_total_odd_digits(a);
    return 0;
}

void disp_total_odd_digits(int a)
{
    int k=a,i=0;
    while(k>0)
    {
        if((k%10)%2==1)
        {
          i=i+1;
        }
        k=k/10;
    }
    printf("%d\n",i);
    
   
}