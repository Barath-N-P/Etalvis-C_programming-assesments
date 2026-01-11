#include<stdio.h>
int main() {
    int a,k=0,t,q=1;
    char j[50];
    printf("Enter an integer: ");
    scanf("%d", &a);
    t=a;
    while(t>=10)
    {
        q=q*10;
        t=t/10;
        k++;
    }
    printf("one by one characters are:\n");
    for(int i=0;i<=k;i++)
    {
        j[i]=(a/q)+48;
        a=a%(q);
        printf("%c\n", j[i]);
        q=q/10;
    }
    return 0;
}