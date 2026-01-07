#include<stdio.h>
int main()
{
    int a,k=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    loop:
    while(a>0)
    {
        if(((a%10)%2)==1)
        {
            k=k+1;
        }
        a=a/10;
        goto loop;
    }
    printf("%d\n",k);
    return 0;

}