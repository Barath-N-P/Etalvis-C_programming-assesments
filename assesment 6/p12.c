#include<stdio.h>
int main()
{
    int a,k=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    loop:
    while(a>0)
    {
        k=k+(a%10);
        a=a/10;
        goto loop;
    }
    printf("%d\n",k);
    return 0;

}