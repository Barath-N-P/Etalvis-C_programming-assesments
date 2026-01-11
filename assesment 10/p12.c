#include <stdio.h>
int main() {
    char s[51];
    int a[50]={1,4,5,8,7,6,3};
    int i = 0;

    while (a[i]!='\0') {
        s[i] = a[i]+48; 
        i++;
    }
     printf("String: %s\n", s);

    return 0;
}
