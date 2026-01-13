#include<stdio.h>
void memcopy(int *src,int *dst,int size);
int main()
{
    int a[]={1,2,3,4,5};
    int b[5],n=5;
    memcopy(a,b,n);
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    
    return 0;
}

void memcopy(int *src,int *dst,int size)
{
    for(int i=0;i<size;i++)
    {
        *(dst+i)=*(src+i);
    }
}
