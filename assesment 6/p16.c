#include<stdio.h>
int main()
{
    int a,let=0,i=2;
    printf("Enter the number: ");
    scanf("%d",&a);
    loop:
    while(i<a)
    {
        if((a%i)==0)
        {
            let=1;
        }
        i++;
        goto loop;
    }
    if(let==0)
    {
        printf("its prime\n");
    }
    else
    {
        printf("its not prime\n");
    }
    return 0;

}