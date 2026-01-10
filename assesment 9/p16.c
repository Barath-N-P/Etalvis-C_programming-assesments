#include<stdio.h>
int main(){
    int n[50],j[50],u[51];
    int i=0,s=0;
    printf("Enter numbers : ");
    for(i=0;i<50;i++)
    {
        scanf("%d",&n[i]);
    }
     for(i=0;i<50;i++)
    {
        scanf("%d",&j[i]);
    }
    for(i=49;i>=0;i--)
    {
        u[i+1]=n[i]+j[i]+s;
        s=u[i+1]/10;
        u[i+1]=u[i+1]%10;
    }
    u[0]=s;
    printf("Sum is : ");
    for(i=0;i<51;i++)
    {
        printf("%d",u[i]);
    }
}
    