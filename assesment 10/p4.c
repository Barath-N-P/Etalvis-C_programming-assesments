#include<stdio.h>
int main() {
   char a[50];
   int i=0,k=0;
    printf("Enter an string: ");
    scanf("%s", a);
    while(a[i]!=0)
    {
        k=(k*10)+(a[i]-48);
        i++;
    }
    printf("The integer value is %d\n", k);
    return 0;
}