#include<stdio.h>
int main()
{
    int a=0,n=5;
    for(int i=0;i<n;i++)
    {
        arrange_ascend(&a);
        printf("%d\n",a);
    }
    return 0;
}
void arrange_ascend(int *r)
{
    (*r)++;
}
