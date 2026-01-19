#include<stdio.h>
void get(char *g);

int main()
{
    char o[50];
    printf("Enter the string:");
    gets(o);
    get(o);
    return 0;
}
void get(char *g)
{
   int i=0,j=0;
   while(g[i]!='\0')
   {
    if(g[i]==' ' && g[i+1]!=' ')
    {
        j++;
    }
    i++;
   }
   printf("%d\n",j+1);


}
