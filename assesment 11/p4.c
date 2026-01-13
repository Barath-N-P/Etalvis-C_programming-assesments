#include<stdio.h>
void find_2digit_odd_sum7(int *r);
int main()
{
    for(int i=10;i<100;i++)
    {
      find_2digit_odd_sum7(&i);
    } 
    return 0;
}
void find_2digit_odd_sum7(int *r)
{
    int k=(*r)/10+(*r)%10;
    if((k==7) && ((*r)%2==1))
    {
        printf("%d\n",*r);
    }
}
