#include<stdio.h>
int main()
{
    int a,l,k=1,y;
    printf("Enter the number: ");
    scanf("%d",&a);
    y=a;
    loop:
    while(a>0)
    {
        k=k*10;
        a=a/10;
        goto loop;
    }
    l=k/10;
    printf("%d\n",(l*(y%10))+((y%l)/10)*10 + (y/l));
    return 0;

}