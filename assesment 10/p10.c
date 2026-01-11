#include<stdio.h>
int main() {
   char a[60];
   int t,y=0;
    printf("Enter an digit: ");
    scanf("%s", a);
    while(a[y]!='\0')
    {
        y++;
    }
    printf("Reversed digit is: \n");
    for(int i=y-1;i>=0;i--)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    
    return 0;
}