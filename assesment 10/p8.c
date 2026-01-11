#include<stdio.h>
int main() {
   char a[50];
   int k=0,l=0;
    printf("Enter an string: ");
    scanf("%s", a);
    while(a[k]!=0)
    {
        k=k+1;
    }
    for(int i=0;i<k;i++)
    {
        if(a[i]>=48 && a[i]<=57)
        {
            l=1;
        }
        else{
            l=0;
            break;
        }
    }
    if(l==1)
    {
        printf("VALID \n");
    }
    else
    {
        printf("NOT VALID\n");
    }
    return 0;
}