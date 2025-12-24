#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int b =a/100;
    int c = (a/10)%10;
    int d = a%10;
    int sum = b+c+d; 
    int sum1=(sum / 10) + (sum % 10);
    int sum2 = (sum1 / 10) + (sum1 % 10); 
    printf("Result: %d\n", sum2);
    return 0;
}
