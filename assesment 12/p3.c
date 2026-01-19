#include<stdio.h>
int get(char *g,char *i);

int main()
{
    char o[100],v[50];
    int l;
    printf("Enter the string:");
    scanf("%s",o);
    printf("Enter the substring: ");
    scanf(" %s",v);
    l=get(o,v);
    if(l!=-1)
    {
      printf("%d\n",l);
    }
    else{
      printf("not found");
    }
    return 0;
}
int get(char *g,char *i)
{
   int j=0,k; 
   while(*(g+j)!='\0')
   {
      k=0;
      while(*(i+k)!='\0' && *(g+k+j)==*(i+k))
      {
          k++;
      }
      if(*(i+k)=='\0')
      {
         return j+1;
      }
      j++;
   }
   return -1;
}
