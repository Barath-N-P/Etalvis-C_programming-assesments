#include<stdio.h>
#include<stdlib.h>

struct student{
   int id;
   int maths;
   int science;
   struct student*next;
};

int main()
{
  int a;
  struct student *head=NULL,*ptr=NULL,*start=NULL,*del=NULL;
  
  while(1)
  {  
     printf("MENU ITEMS\n");
     printf("1.Insert Entry\n");
     printf("2.Delete Entry\n");
     printf("3.Display Entry\n");
     printf("4.Exit\n");
     scanf("%d",&a);

     if(a==1)
     {
         head=(struct student *)malloc(sizeof(struct student));
         printf("Enter the id:");
         scanf("%d",&head->id);
         printf("Enter the maths mark:");
         scanf("%d",&head->maths);
         printf("Enter the science mark:");
         scanf("%d",&head->science);
         head->next=NULL;

         if(start==NULL)
         {
             start=head;
         }
         else
         {
             ptr=start;
             while(ptr->next!=NULL)
             {
                 ptr=ptr->next;
             }
             ptr->next=head;
         }
     }
     else if(a==2)
     {
         del=NULL;
         if(start==NULL)
         {
             printf("please insert any numbers and delete the specific id");
         }
         else
         {
             int k;
             ptr=start;
             printf("Enter the id to delete the secific data:");
             scanf("%d",&k);

             if(start->id==k)
             {
                 del=start;
                 start=start->next;
                 free(del);
             }
             else
             {
                 del=start;
                 ptr=start->next;
                 while(ptr!=NULL)
                 {
                     if(k==ptr->id) 
                     {
                         del->next=ptr->next;
                         free(ptr);
                         break; 
                     }
                     del=ptr;
                     ptr=ptr->next;
                 }
             }
         }
     }
     else if(a==3)
     {
         printf("DISPALYING\n");
         ptr=start;
         while(ptr!=NULL)
         {
             printf("ID=%d\nMATHS=%d\nSCIENCE=%d\n",ptr->id,ptr->maths,ptr->science);
             ptr=ptr->next;
         }
     }
     else if(a==4)
     {
         return 0;
     }

  }
}
