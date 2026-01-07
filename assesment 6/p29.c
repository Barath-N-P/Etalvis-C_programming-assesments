#include<stdio.h>
int main()
{
    int a,b,c,k;
    printf("Enter number: ");
    scanf("%d %d %d",&a,&b,&c);
    k =(a<b)?a:b || (a<c)?a:c;
    loop:
    while(1)
    {
        if((k%a==0) && (k%b==0) && (k%c==0))
        {
           printf("%d\n",k); 
           return 0;
        }
        k++;
        goto loop;
    }
}