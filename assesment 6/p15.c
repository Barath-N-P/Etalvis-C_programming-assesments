#include<stdio.h>
int main()
{
    int a,k=1,t,l;
    printf("Enter the number: ");
    scanf("%d",&a);
    t=a;
    loop:
    while(a>0)
    { 
        a=a/10;
        k=k*10;
        goto loop;
    }
    k=k/10;
    l=(((t/k)-1)*k)+(t%k);
    if(((t%10)%2)==1)
    {
         printf("%d\n",l);
    }
    else{
         printf("%d\n",t);
    }
   
    return 0;

}