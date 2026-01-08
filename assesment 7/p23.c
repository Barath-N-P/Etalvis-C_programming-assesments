#include<stdio.h>
void disp_single_digit_square(int a);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    disp_single_digit_square(a);
    return 0;
}

void disp_single_digit_square(int a)
{
    int k=a,i=0,l;
    while(k>0)
    {
        l=k%10;
        if(l==4 || l==1 || l==9)
        {
          i=i+1;
        }
        k=k/10;
    }
    printf("%d\n",i);
    
   
}