#include<stdio.h>
void rev(int h[],int s);
void sum(int a[],int j);
int main(){
    int n[5],b[5],s=5;
    printf("Enter the numbers:\n");
    for(int i=0;i<s;i++)
    {
     scanf("%d",&n[i]);
    }
    for(int i=0;i<s;i++){
           b[i]=n[i];
    }
    rev(n,s);
    sum(n,s);
}

void rev(int h[],int s){
    printf("reversed each num:\n");
    int rev=0,k;
    for(int i=0;i<s;i++){
        k=h[i];
        rev=0;
       while(k>0)
       {
            rev=(rev*10)+(k%10);
            k=k/10;
       }
       h[i]=rev;
    }
    for(int i=0;i<s;i++){
            printf("%d\n",h[i]);
    }
}
void sum(int a[],int j){
    int y=0;
    for(int i=0;i<j;i++){
         y=y+a[i];
    }
    printf("Sum is:%d\n",y);

}
