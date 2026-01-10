#include<stdio.h>
int main(){
    int n[5],sum=0;
    printf("Enter the numbers:\n");
    for(int i=0;i<5;i++)
    {
     scanf("%d",&n[i]);
    }
    for(int i=0;i<5;i++){
        sum=sum+n[i];
    }
    printf("the sum is: %d\n",sum);
}
