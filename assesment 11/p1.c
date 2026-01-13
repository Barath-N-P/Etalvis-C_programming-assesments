#include<stdio.h>
int main()
{
    int a,*b;
    printf("Enter the number: ");
    scanf("%d",&a);
    b=&a;
    *b=*b+5;
    printf("changed value:%d\n",a);
    return 0;
}
