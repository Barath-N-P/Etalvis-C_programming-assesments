#include<stdio.h>
void getnumbers(char *n1,char *n2);
void addnumbers(char *n1,char *n2,char *r);
int main()
{
    char number1[50],number2[50];
    char result[51];
    getnumbers(number1,number2);
    addnumbers(number1,number2,result);
    printf("SUM: %s\n",result);
    return 0;
}
void getnumbers(char *n1,char *n2)
{
    printf("Enter the first number: ");
    scanf("%s",n1);
    printf("Enter the second number: ");
    scanf("%s",n2);  
     
}
void addnumbers(char *n1,char *n2,char *r)
{
      int i=0,j=0,s=0,c=0,k=0;
      while(*(n1+i)!='\0')
         {
            i++;
         }
      i--;
      while(*(n2+j)!='\0')
         {
            j++;
         }
      j--;

      while(i>=0 || j>=0 || c)
       {
         s=c;
         if(i>=0)
         {
            s=s+(*(n1+i))-'0';
            i--;
         }
         if(j>=0)
         {
             s=s+(*(n2+j))-'0';
             j--;
         }
         *(r+k)=(s%10)+'0';
         k++;
         c=s/10;
       }
       *(r+k)='\0';
       for(int i=0,j=k-1;i<j;i++,j--)
       {
        char t=*(r+i);
        *(r+i)=*(r+j);
        *(r+j)=t;
       }
}
