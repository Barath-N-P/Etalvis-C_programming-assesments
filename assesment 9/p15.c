#include<stdio.h>
int main(){
    int k[100],o[100],i=0,s=0,u,a;
    printf("Enter numbers : ");
    while(1)
    {
        scanf("%d",&k[i]); 
        if(k[i]==0)
        {
            break;
        }
        i++;
    }
    for(int j=0;j<i;j++)
    {
        s=k[j];
        u=0;
         while(s>0)
         {
             u=(s%10)+u;
             s=s/10;
         }
         o[j]=u;

    }
    for(int x=0;x<i;x++)
    {
        for(int y=x+1;y<i;y++)
        {
            if(o[x]>o[y])
            {
                a=o[x];
                o[x]=o[y];
                o[y]=a;
            }
        }
    }
    printf("new array in ascending order:\n");
    
    for(int j=0;j<i;j++)
    {
        printf("%d\n",o[j]);
    }
}

