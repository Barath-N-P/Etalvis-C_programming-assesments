#include<stdio.h>
int main() {
    int a,k=0,t,q=1;
    char j[50];
    printf("Enter an integer: ");
    scanf("%d", &a);
    t=a;
    while(t>10)
    {
        q=q*10;
        t=t/10;
        k++;
    }
    for(int i=0;i<=k;i++)
    {
        j[i]=(a/q)+48;
        a=a%(q);
        q=q/10;
    }
    printf("The string value is: %s\n",j);
    
    return 0;
}