#include<stdio.h>
void getnumbers(char *n1,char *n2);
int mulnumbers(char *n1,char *n2,int *r);
int main()
{
    char number1[50],number2[50];
    int result[100]={0};
    getnumbers(number1,number2);
    mulnumbers(number1,number2,result);
    return 0;
}
void getnumbers(char *n1,char *n2)
{
    printf("Enter the first number: ");
    scanf("%s",n1);
    printf("Enter the second number: ");
    scanf("%s",n2);  
     
}
int mulnumbers(char *n1,char *n2,int *r)
{
      int i=0,j=0,sum=0,c=0,k=0;
      while(*(n1+i)!='\0')
         {
            i++;
         }
      while(*(n2+j)!='\0')
         {
            j++;
         }
      for(int l=i-1;l>=0;l--)
      {
         for(int h=j-1;h>=0;h--)
         {
             c=(*(n1+l)-'0')*(*(n2+h)-'0');
             sum=c+r[l+h+1];
             r[l+h+1]=sum%10;
             r[l+h]=r[l+h]+sum/10;
         }
      }
      
      while(k<i+j && r[k]==0)
      {
         k++;
      }
      if(k==i+j)
      {
         return 0;
      }
      else{
         for(;k<i+j;k++)
         {
            printf("%d",r[k]);
         }
      }
      printf("\n");
      return 0;
      
}
