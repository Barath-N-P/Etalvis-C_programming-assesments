#include<stdio.h>
int main(){
    char a[50];
    int k=0;
    printf("Enter an string: ");
    scanf("%s", a);
    while(a[k]=='0')
    {
        k++;
    }
    if(a[k]=='\0')
    {
        printf("0\n");
    }
    else{
        for(int i=k;a[i]!=0;i++)
        {
            printf("%c", a[i]);
        }
    }
    return 0;
}