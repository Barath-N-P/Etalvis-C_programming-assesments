#include<stdio.h>
int main()
{
  int a,i=2,l=0;
  printf("Enter the number: ");
  scanf("%d",&a);
  if(a<=1){printf("its not a prime");return 0;}
  con: 
     if(i<a)
     { 
       if((a%i)==0)
       {     
         l=1;
         goto kon;
       }
       i=i+1;
       goto con;
     } 
   kon:
       if(l==1){printf("its not a prime \n");}
       else{printf("its  prime \n");}  
   return 0;
}   
         
