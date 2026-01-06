#include<stdio.h>
int main()
{
    int a,k=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    
    loop1:
    for(;a>0;){
        k=(k*10)+(a%10);
        a=a/10;
        goto loop1;
         
    }
    printf("%d\n",k);
}