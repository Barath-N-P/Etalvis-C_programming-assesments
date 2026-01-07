#include<stdio.h>
int main()
{
    int a,b,k;
    printf("Enter number: ");
    scanf("%d %d",&a,&b);
    k =(a<b)?a:b;
    loop:
    while(1)
    {
        if((k%a==0) && (k%b==0))
        {
           printf("%d\n",k); 
           return 0;
        }
        k++;
        goto loop;
    }
}