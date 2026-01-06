#include<stdio.h>
int main()
{
    int a,n=2;
    printf("Enter the number: ");
    scanf("%d",&a);
    loop:
    for(;n<(a%100);)
    {
        for(;((a%100)%n)==0;)
        {
            printf("not prime\n");
            return 0;
        }   
        n++;     
        goto loop;
    }

    printf("its prime\n");
    return 0;
}