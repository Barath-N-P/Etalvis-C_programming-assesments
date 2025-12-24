#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter a number: ");
    scanf("%d", &a);
    b=((a/1000)*10)+((a/100)%10);
    c=(a%10)+(((a%100)/10)*10);
    d=(b==c);
    printf("Result: %d\n",d);
    return 0;
}

