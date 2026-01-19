#include<stdio.h>
int getnumbers(char *n1,char *n2);
int mulnumbers(char *n1,char *n2,int *r);
int addition(char *num1,char *num2,int *res);
int subraction(char *num1,char *num2,int *res);
int division(char *a,char *b,int *r);
int main()
{
    char number1[50],number2[50],look[30];
    int result[100];
    getnumbers(number1,number2);
    int k;
    do
    {
        printf("calc>");
        scanf("%s",look);
        k=(look[0]=='e' && look[1]=='x' && look[2]=='i' && look[3]=='t' && look[4]=='\0');
        for(int i=0;i<100;i++)
        {
            result[i]=0;
        }
        if(look[0]=='m' && look[1]=='u' && look[2]=='l' && look[3]=='\0')
        {
           mulnumbers(number1,number2,result);
        }  
        if(look[0]=='a' && look[1]=='d' && look[2]=='d' && look[3]=='\0')
        {
           addition(number1,number2,result);
        }  
        if(look[0]=='s' && look[1]=='u' && look[2]=='b' && look[3]=='\0')
        {
           subraction(number1,number2,result);
        }  
        if(look[0]=='d' && look[1]=='i' && look[2]=='v' && look[3]=='\0')
        {
           division(number1,number2,result);
        }  
    }
    while(!k);
    return 0;
}
int getnumbers(char *n1,char *n2)
{
    printf("Enter the first number: ");
    scanf("%s",n1);
    printf("Enter the second number: ");
    scanf("%s",n2);  
   
     
}
int mulnumbers(char *n1,char *n2,int *r)
{
      int i=0,j=0,sum=0,c=0,k=0;
      while(*(n1+i)!='\0')
         {
            i++;
         }
      while(*(n2+j)!='\0')
         {
            j++;
         }
      for(int l=i-1;l>=0;l--)
      {
         for(int h=j-1;h>=0;h--)
         {
             c=(*(n1+l)-'0')*(*(n2+h)-'0');
             sum=c+r[l+h+1];
             r[l+h+1]=sum%10;
             r[l+h]=r[l+h]+sum/10;
         }
      }
      
      while(k<i+j && r[k]==0)
      {
         k++;
      }
      if(k==i+j)
      {
         return 0;
      }
      else{
         for(;k<i+j;k++)
         {
            printf("%d",r[k]);
         }
      }
      printf("\n");
      
}
int addition(char *num1,char *num2,int *res)
{
     int k=0,p=0,s=0,i=0,j=0;
     while(*(num1+i)!='\0')
     {
        i++;
     }
     i--;
     while(*(num2+j)!='\0')
     {
        j++;
     }
     j--;
     while(i>=0 || j>=0 || s)
     {
       s=p;
       if(i>=0)
       {
        s=s+(*(num1+i--)-'0');
       }
       if(j>=0)
       {
        s=s+(*(num2+j--)-'0');
       }
       *(res+k++)=(s%10);
       p=s/10;
     }
     k=0;
     while(*(res+k)!='\0')
     {
        k++;
     }
     for(int o=k-1;o>=0;o--)
     {
        printf("%d",res[o]);
     }
     printf("\n");
     
}
int subraction(char *num1,char *num2,int *res)
{
    int i=0,j=0,diff=0,b=0,k=0;
      while(*(num1+i)!='\0')
         { 
            i++;
         }
      i--;
      while(*(num2+j)!='\0')
         {
            j++;
         }
      j--;

      while(i>=0 || j>=0 )
       {
         int d1=(i>=0)?num1[i--]-'0':0;
         int d2=(j>=0)?num2[j--]-'0':0;
         diff=d1-d2-b;
         if(diff<0){
               diff+=10;
               b=1;
         }
         else{
          b=0;
         }
         res[k++]=diff;
       }
     b=0;
     for(int o=k-1;o>=0;o--)
     {
        if(res[o]!=0){b=1;}
        if(b){printf("%d",res[o]);}
     }
     printf("\n");
}
int division(char *a,char *b,int *r)
{
    char t[100]={0},q[100]={0},x[100]={0};
    int i,j,k=0,l=0,m=0,n1=0,n2=0;

    while(a[n1]!='\0') n1++;
    while(b[n2]!='\0') n2++;

    for(i=0;i<n1;i++)
    {
        t[m++]=a[i];
        t[m]='\0';

        int s=0;
        int tlen=0;
        while(t[tlen]!='\0') tlen++;

        int blen=n2;

        int cmp=0;
        while(1)
        {
            int tlen2=0;
            while(t[tlen2]!='\0') tlen2++;

            if(tlen2<blen) break;
            if(tlen2==blen)
            {
                cmp=0;
                for(j=0;j<blen;j++)
                {
                    if(t[j]>b[j]){cmp=1; break;}
                    if(t[j]<b[j]){cmp=-1; break;}
                }
                if(cmp<0) break;
            }

            int p1=tlen2-1,p2=blen-1,c1=0;
            while(p1>=0 || p2>=0)
            {
                int d1=(p1>=0)?t[p1]-'0':0;
                int d2=(p2>=0)?b[p2]-'0':0;
                int diff=d1-d2-c1;
                if(diff<0){diff+=10;c1=1;}
                else c1=0;
                if(p1>=0) t[p1]=diff+'0';
                p1--;p2--;
            }

            int z=0;
            while(t[z]=='0' && t[z+1]!='\0') z++;
            for(int w=z;w<tlen2;w++) t[w-z]=t[w];
            t[tlen2-z]='\0';

            s++;
        }
        q[k++]=s+'0';
    }
    q[k]='\0';
    printf("Quotient: ");
    i=0; 
    while(q[i]!='\0')
    {printf("%c",q[i]); i++;}
    printf("\nRemainder: ");
    i=0; 
    while(t[i]!='\0')
    {printf("%c",t[i]); i++;}
    printf("\n");
}
