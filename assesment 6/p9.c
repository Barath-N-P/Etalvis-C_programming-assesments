#include<stdio.h>
int main()
{
    int a=11,k=0;
    loop:
    while(a<100)
    {
        if(((a%10))==5)
        {
             k=k+a;
        }   
        a++;
        goto loop; 
    }
    printf("%d\n",k);
    return 0;

}