#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int n=5;
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    plus(a,n);
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;

}
void plus(int *b,int n)
{
    for(int i=0;i<5;i++)
    {
        b[i]++;
    }
    printf("\n");
}
