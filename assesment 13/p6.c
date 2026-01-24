#include<stdio.h>
#include<stdlib.h>
struct student
{
  int id;
  int maths;
  int science;
  struct student *next;
};
int main()
{
  struct student *ptr=NULL,*front=NULL,*back=NULL;
  int a;
  while(1)
  {
    printf("MENU ITEMS\n");
    printf("1.ADD\n");
    printf("2.REMOVE\n");
    printf("3.DISPLAY QUEUE\n");
    printf("4.EXIT\n");
    scanf("%d",&a);
    if(a==1)
    {
      ptr=(struct student *)malloc(sizeof(struct student));
      printf("Enter the ID:\n");
      scanf("%d",&ptr->id);
      printf("ENter the maths:\n");
      scanf("%d",&ptr->maths);
      printf("Enter the science:\n");
      scanf("%d",&ptr->science);
      ptr->next=NULL;
      if(front==NULL)
      {
        front=back=ptr;
      }
      else
      {
        back->next=ptr;
        back=ptr;
      }
    }
    else if(a==2)
    {
      if(front==NULL)
      {
        printf("enter something to remove\n");
      }
      else
      {
        ptr=front;
        front=front->next;
        free(ptr);
      }
      if(front==NULL)
      {
        back=NULL;
      }
    }
    else if(a==3)
    {
      ptr=front;
      while(ptr!=NULL)
      {
        printf("ID:%d\tMATHS:%d\tSCIENCE:%d\n",ptr->id,ptr->maths,ptr->science);
        ptr=ptr->next;
      }
    }
    else if(a==4)
    {
      return 0;
    }
  }
}
