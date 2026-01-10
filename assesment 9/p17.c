#include<stdio.h>
int main(){
  int a[100],c=0,n;
  printf("Enter how numbers you need to enter : ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n-1;i++)
  {
    if(a[i]>=10)
    {
        c=a[i]/10;
        a[i]=a[i]%10;
        a[i+1]=a[i+1]+c;
    }
  }
  for(int i=0;i<5;i++)
  {
    printf("%d ",a[i]);
  } 
}