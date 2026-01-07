#include<stdio.h>
int main()
{
    int a,b,l=1,k=1;
    printf("Enter an number: ");
    scanf("%d %d",&a,&b);
    while((k<=a) && (k<=b))
    {
        if((a%k==0) && (b%k==0))
        {
           l = k;
        }
        k++;
    }
    printf("%d\n",l);
}