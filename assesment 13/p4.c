#include<stdio.h>
#include<stdlib.h>
struct student {
  struct student *prev;
  int id;
  int maths;
  int science;
  struct student *next;
};
int main()
{
  struct student *ptr=NULL,*start=NULL,*last=NULL;
  int l;
  for(int i=0;i<5;i++)
  {
    last=(struct student *)malloc(sizeof(struct student));
    last->id=i;
    last->maths=i+11;
    last->science=i+22;
    last->prev=NULL;
    last->next=NULL;
    if(start==NULL)
    {
      start=last;
    }
    else{
      ptr=start;
      while(ptr->next!=NULL)
      {
        ptr=ptr->next;
      }
      ptr->next=last;
      last->prev=ptr;
    }
  }
  while(1)
  {
     int a,idn,baf;
     printf("MENU ITEMS\n");
     printf("1.Insert Entry\n");
     printf("2.Delete Entry\n");
     printf("3.Display Entry\n");
     printf("4.Exit\n");
     scanf("%d",&a);
     if(a==1)
     {
      last=(struct student *)malloc(sizeof(struct student));
      printf("Enter ID :");
      scanf("%d",&last->id);
      printf("Enter maths :");
      scanf("%d",&last->maths);
      printf("Enter science :");
      scanf("%d",&last->science);
      last->prev=NULL;
      last->next=NULL;
      printf("before or after(1 or 2):");
      scanf("%d",&baf);
      printf("Enter refernce id:");
      scanf("%d",&idn);
      ptr=start;
      while(ptr!=NULL && ptr->id!=idn)
      {
        ptr=ptr->next;
      }
      if(ptr==NULL)
      {
        printf("ID not found");
        free(last);
      }
      else if(baf==1)
      {
        last->next=ptr;
        last->prev=ptr->prev;
        if(ptr->prev!=NULL)
        {
          ptr->prev->next=last;
        }
        else{
          start=ptr;
        }
        ptr->prev=last;
      }
      else if(baf==2)
      {
        last->prev=ptr;
        last->next=ptr->next;
        if(ptr->next!=NULL)
        {
          ptr->next->prev=last;
        }
        ptr->next=last;
      }
      else{
        printf("unknown choice bud\n");
        free(last);
      }
    }
    else if(a==2)
    {
      int h;
      printf("Enter the ID number to delete:\n");
      scanf("%d",&h);
      ptr=start;
      while(ptr!=NULL && ptr->id==h)
      {
        ptr=ptr->next;
      }
      if(ptr==NULL)
      {
        printf("ID not found\n");
      }
      else{
        if(ptr->prev!=NULL)
        {
          ptr->prev->next=ptr->next;
        }
        else{
          start=ptr->next;
        }
        if(ptr->next!=NULL)
        {
          ptr->next->prev=ptr->prev;
        }
        free(ptr);
      }
      
    }
    else if(a==3)
    {
      printf("DISPLAYING OUTPUT\n");
      ptr=start;
      while(ptr!=NULL)
      {
        printf("ID:%d\nMATHS:%d\nSCIENCE:%d\n",ptr->id,ptr->maths,ptr->science);
        ptr=ptr->next;
      }
    }
    else if(a==4)
    {
      return 0;
    }
  }
  
}
