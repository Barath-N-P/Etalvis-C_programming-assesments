#include<stdio.h>
void memcomp(int *src,int *dst,int size);
int main()
{
    int a[]={1,2,3,4,5};
    int b[5]={1,2,3,4,5},n=5;
    memcomp(a,b,n);
    
    printf("\n");
    
    return 0;
}

void memcomp(int *src,int *dst,int size)
{
    for(int i=0;i<size;i++)
    {
        if(*(src+i)!=*(dst+i))
        {
            printf("failure\n");
            return;
        }
        
    }
    printf("Success\n");
}
