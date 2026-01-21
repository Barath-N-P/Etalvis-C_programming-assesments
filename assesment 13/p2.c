#include<stdio.h>
#include<stdlib.h>
struct student{
    int id;
    int Maths;
    int Science;
    struct student *next;
};
int main()
{
    struct student *start=NULL;
    struct student *aduthu=NULL;
    struct student *last=NULL;
    int id,maths,science,get;
    loop:
    printf("MENU items\n");
    printf("1.Insert Entry\n");
    printf("2.Display List\n");
    printf("3.Exit\n");
    scanf("%d",&get);
    if(get==1)
    {
      while(1)
      {
        printf("Entet the student ID:");
        scanf("%d",&id);
        if(id==-1)
        {
            break;
        }
        printf("Enter the maths mark:");
        scanf("%d",&maths);
        printf("Enter the science mark:");
        scanf("%d",&science);
        last=(struct student*)malloc(sizeof(struct student));
        last->id=id;
        last->Maths=maths;
        last->Science=science;
        last->next=NULL;
        if(start==NULL)
        {
            start=last;
        }
        else{
            aduthu=start;
            while(aduthu->next!=NULL)
            {
               aduthu=aduthu->next;
            }
            aduthu->next=last;
        }
        goto loop;
        
      }
    }
    else if(get==2)
    {  
      printf("Student Details:\n");
      aduthu=start;
      while(aduthu!=NULL)
       {
         printf("ID:%d,Maths:%d,Science:%d\n",aduthu->id,aduthu->Maths,aduthu->Science);
         aduthu=aduthu->next;
       }
       goto loop;
    }
    else if(get==3)
    {
       return 0;    
    }
    else{
        printf("something wrong with your input:");
    }
    
}
