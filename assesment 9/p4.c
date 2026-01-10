#include<stdio.h>
int main(){
    int n[5],s=0;
    printf("Enter the numbers:\n");
    for(int i=0;i<5;i++)
    {
     scanf("%d",&n[i]);
    }
    s=n[0];
    for(int i=0;i<5;i++){

        if(s<n[i])
        {
           s=n[i];
        }
    }
    printf(" %d\n",s);
}