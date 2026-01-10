#include<stdio.h>
int main(){
    int k[100],i=0,s=0;
    printf("Enter numbers : ");
    while(1)
    {
        scanf("%d",&k[i]);
        s=s+k[i]; 
        if(k[i]==0)
        {
            break;
        }
        i++;
    }
    printf("Sum is : %d\n",s);
    if(i%2==1){
        printf("%d\n",k[i/2]);
    }
    else{
        printf("%d \n",(k[(i/2)-1]+k[i/2])/2);                
    }
    
}
