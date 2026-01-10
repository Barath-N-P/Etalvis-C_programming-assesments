#include<stdio.h>
int main(){
    int n[5],j[5],s=0,a;
    printf("Enter the numbers:\n");
    for(int i=0;i<5;i++)
    {
     scanf("%d",&n[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(n[i]%2==0)
        {
            j[s]=n[i];
            s++;
        }

    }
    printf("\n");
    for(int i=0;i<s;i++)
    {
        printf("%d\n",j[i]);
    }
    
}