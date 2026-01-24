#include<stdio.h>
#include<stdlib.h>
struct student{
  int id;
  int maths;
  int science;
  struct student *next;
};
int main()
{
  struct student *last=NULL,*ptr=NULL;
  int p;
  while(1)
  {
    printf("MENU ITEMS\n");
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.DISPLAY STACK\n");
    printf("4.EXIT\n");
    scanf("%d",&p);
    if(p==1)
    {
      ptr=(struct student *)malloc(sizeof(struct student));
      printf("Enter the ID:\n");
      scanf("%d",&ptr->id);
      printf("ENter the maths:\n");
      scanf("%d",&ptr->maths);
      printf("Enter the science:\n");
      scanf("%d",&ptr->science);
      ptr->next=last;
      last=ptr;

    }
    else if(p==2)
    {
      if(last==NULL)
      {
        printf("not entered any values\n");
      }
      else{
       ptr=last;
       last=last->next;
       free(ptr);
      }
    }
    else if(p==3)
    {
      ptr=last;
      while(ptr!=NULL)
      {
        printf("ID:%d\nMATHS:%d\nSCIECNCE:%d\n",ptr->id,ptr->maths,ptr->science);
        ptr=ptr->next;
      }
    }
    else if(p==4)
    {
      return 0;
    }
  }
}
