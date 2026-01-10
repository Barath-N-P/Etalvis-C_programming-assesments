#include<stdio.h>
int main(){
    int n[5],j[5],s=0,a,count;
    printf("Enter the numbers:\n");
    for(int i=0;i<5;i++)
    {
     scanf("%d",&n[i]);
    }
    for(int i=0;i<5;i++)
    {
        a=2;
        count=0;
        if(n[i]==1)
        {
            count=1;
        }
        else
        {

            while(a<n[i])
           {
             if(n[i]%a==0)
              {  
                 count=1;
              }
              a++;
            }
        }
        if(count==1)
        {
            j[s]=n[i];
            s++;
        }

    }
    printf("\n");
    for(int i=0;i<s;i++)
    {
        printf("%d\n",j[i]);
    }
    
}