#include<stdio.h>
int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("The ASCII value of %d is %d\n", a, a+48);
    return 0;
}