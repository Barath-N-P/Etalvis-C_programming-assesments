#include<stdio.h>
int main(){
    int k[100],i=0,s=0;
    printf("Enter numbers : ");
    while(1)
    {
        scanf("%d",&k[i]);
        if(k[i]==0)
        {
            break;
        }
       
        i++;
    }
    if(i==4)
    {
        if(k[0]==k[i-1])
        {
            printf("success\n");
        }
        else{
            printf("fail\n");
        }
    }
    else{
        printf("fail\n");
    }
}
