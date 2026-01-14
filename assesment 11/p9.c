#include<stdio.h>
void intcon(int *src1,int *src2,int *dst,int size1,int size2);
int main()
{
    int a[]={1,2,3,4,5,6,54,4};
    int b[]={1,2,3,4,5};
    int c[50],size3;
    int size1=sizeof(a)/sizeof(a[0]);
    int size2=sizeof(b)/sizeof(b[0]);
    intcon(a,b,c,size1,size2);
    size3=size1+size2;
    printf("output: \n");
    for(int i=0;i<size3;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
    
    return 0;
}

void intcon(int *src1,int *src2,int *dst,int size1,int size2)

{
    for(int i=0;i<size1;i++)
    {
        *(dst+i)=(*(src1+i));
    }
    for(int i=0;i<size1;i++)
    {
        *(dst+size1+i)=(*(src2+i));
    }
    
}
