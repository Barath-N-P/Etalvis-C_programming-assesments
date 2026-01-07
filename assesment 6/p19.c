#include<stdio.h>
int main()
{
    int a,t,k=0,let=0,i=2;
    printf("Enter the number: ");
    scanf("%d",&a);
    loop:
    t=((a%1000)/10);
    while(i<t)
    {
        if((t%i)==0)
        {
            let=1;
        }
        i++;
        goto loop;
    }
    if(let==0)
    {
        printf("its prime \n");
    }
    else{
        printf("its not prime\n");
    }
    return 0;
}