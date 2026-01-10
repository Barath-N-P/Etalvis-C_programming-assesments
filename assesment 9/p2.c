#include<stdio.h>
int main(){
    int j=5,n[j],sum=0;
    printf("Enter the numbers:\n");
    for(int i=0;i<j;i++)
    {
     scanf("%d",&n[i]);
    }
    for(int i=0;i<j;i++){
        sum=sum+n[i];
    }
    printf("the average is: %f\n",(float)sum/j);
}