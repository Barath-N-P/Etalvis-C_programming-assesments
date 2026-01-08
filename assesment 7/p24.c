#include<stdio.h>
void disp_two_digit_square(int a);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    disp_two_digit_square(a);
    return 0;
}

void disp_two_digit_square(int a)
{
    int k=a,i=0,l;
    while(k>10)
    {
        l=k%100;
        if(l==16 || l==25 || l==36 || l==49 || l==64 || l==81)
        {
          i=i+1;
        }
        k=k/10;
    }
    printf("%d\n",i);
    
   
}