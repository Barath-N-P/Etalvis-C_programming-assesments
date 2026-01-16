#include<stdio.h>
void get(char *g,char *i);

int main()
{
    char o[50],v;
    printf("Enter the string:");
    scanf("%s",o);
    printf("Enter the chracter: ");
    scanf(" %c",&v);
    get(o,&v);
    return 0;
}
void get(char *g,char *i)
{
   int j=0; 
   while(*(g+j)!='\0')
   {
      if(*(g+j)==*(i))
      {
        printf("%d ",j+1);
      }
      j++;
   }
}
