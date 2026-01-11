#include <stdio.h>

int main() {
    char s[51];
    int a[50],i = 0;

    printf("Enter number: ");
    scanf("%s",s);

    while(s[i]!='\0') {
        a[i] = s[i]-48; 
        i++;
    }

    printf("Integer array:\n");
    for (int j=0;j<i;j++) {
        printf("%d ",a[j]);
    }
    printf("\n");

    return 0;
}
