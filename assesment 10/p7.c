#include<stdio.h>
int main() {
   char a[100];
   int k=0;
    printf("Enter an string: ");
    scanf("%s", a);
    while(a[k]!=0)
    {
        k=k+1;
    }
    printf("lenght of string is %d\n", k);
    return 0;
}