#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b=((a%10)!=(a/10));
    printf("Result: %d\n",b);
    return 0;
}

