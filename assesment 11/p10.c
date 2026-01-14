#include<stdio.h>
void strcon(char *src1,char *src2,char *dst);
int main()
{
    char a[]="embeddediejf";
    char b[]="embedded";
    char c[50];
    strcon(a,b,c);
    printf("%s\n",c);
    return 0;
}

void strcon(char *src1,char *src2,char *dst)
{
    while((*src1)!='\0')
    {
        (*dst)=(*src1);
        dst++;
        src1++;
    }
    while((*src2)!='\0')
    {
        (*dst)=(*src2);
        dst++;
        src2++;
    }
}
