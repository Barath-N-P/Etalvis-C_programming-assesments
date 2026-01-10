#include<stdio.h>
void ascending(int n[],int j);
int main(){
    int n[5],k=5,a;
    printf("Enter the numbers:\n");
    for(int i=0;i<5;i++)
    {
     scanf("%d",&n[i]);
    }
    ascending(n,k);
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",n[i]);
    }
}
void ascending(int n[],int j)
{
    int a;
     for(int i=0;i<5;i++)
    {
       for(int l=i+1;l<5;l++)
       {
        if(n[i]>n[l])
        {
          a=n[i];
          n[i]=n[l];
          n[l]=a;
        } 
       }
    }
}