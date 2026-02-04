#include<stdio.h>
#include<stdlib.h>
#define n 8
void print(char a[n][n]);
int place(char a[n][n],int j);//i-> row ,j->column
int check(char a[n][n],int i,int j);
int main()
{
   char a[n][n]={};
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        a[i][j]='.';
    }
   }
   place(a,0);
   print(a);
}
int check(char a[n][n],int i,int j)
{
    //left and right
    for(int u=j-1;u>=0;u--)
    {
        if(a[i][u]=='Q')
        {
            return 0;
        }      
    }
    //crossthings  
    //cross downleft
     for( int u=i+1,k=j-1;u<8 && k>=0;u++ ,k--)
    {
        
              if(a[u][k]=='Q')
              {
                return 0;
              }  
              
            
        
    }
    //cross up left
    for(int u=i-1,k=j-1;u>=0 && k>=0;u--,k--)
    {
            
                if(a[u][k]=='Q')
                {
                    return 0;
                }
    }
    return 1;
}
int place(char a[n][n],int j)
{
    if(j>=n)
    {
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        if(check(a,i,j))
        {
            a[i][j]='Q';
            if(place(a,j+1))
            {
                return 1;
            }
            a[i][j]='.';
        }
    }
    return 0;
}

void print(char a[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
    
    
}
