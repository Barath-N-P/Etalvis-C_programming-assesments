#include<stdio.h>
int main()
{  
  int a;
  printf("Enter the number:");
  scanf("%d",&a);
  if((((a/1000)*10)+((a/100)%10))==((a%10)+((a%100)/10)*10))
  {
    printf("Success\n");
  }
  else
  {
    printf("Failure\n");
  }

}
