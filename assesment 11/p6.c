#include<stdio.h>
void strcpy(int *src,int *dst);
int main()
{
    char a[]="Hello embedded";
    char b[25];
    strcpy(a,b);
    printf("copied string:%s",b);
    printf("\n");
    
    return 0;
}

void strcpy(int *src,int *dst)
{
    while((*src)!='\0')
    {
        (*dst)=(*src);
        src++;
        dst++;
    }
}
