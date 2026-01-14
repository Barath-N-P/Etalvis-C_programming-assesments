#include<stdio.h>
void strcomp(char *src,char *dst);
int main()
{
    char a[]="embeddediejf";
    char b[]="embedded";
    strcomp(a,b);
    printf("\n");
    
    return 0;
}

void strcomp(char *src,char *dst)
{
    while((*src)!='\0')
    {
        if((*src)!=(*dst))
        {
            printf("failure\n");
            return;
        }
        src++;
        dst++;
    }
    printf("success\n");
}
