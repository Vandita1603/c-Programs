#include<stdio.h>
// #include<conio.h>
struct node
{
  int data;
  struct node *next;
};
struct node *start=NULL;
int choice,item,loc;
char ch;

void insert_at_begin();
void insert_at_end();
void insert_at_loc();
void del_begin();
void del_end();
void del_loc();
void traverse(struct node *ptr);

void main()
{
//    clrscr();
   do{
    //   clrscr();
      printf("\t\t1-insert at beginning\n");
      printf("\t\t2-insert at end\n");
      printf("\t\t3-insert at specified location\n");
      printf("\t\t4-Delete from beginning\n");
      printf("\t\t5-Delete from end\n");
      printf("\t\t6-Delete from specified Location\n");
      printf("\t\t7-Traverse\n");
      printf("\n\tEnter your choice::");
      scanf("%d",&choice);

      switch(choice)
      {
	case 1:
	       insert_at_begin();
	       break;
	case 2:
	       insert_at_end();
	       break;
	case 3:
	       insert_at_loc();
	       break;
	case 4:
           del_begin();
	       break;
	case 5:
           del_end();
	       break;
	case 6:
	       del_loc();
	       break;
	case 7:
           traverse(start);
	       break;
	default:
            printf("Invalid choice");
		    exit(0);
       }
       fflush(stdin);
       printf("\t\t\nDo u want to continue::");
       scanf("%c",&ch);
  }//end of DO..while
  while((ch=='y')||(ch=='Y'));
//   getch();
}

void insert_at_begin()
{
  struct node *new1;
  printf("Enter the item::");
  scanf("%d",&item);
  new1=(struct node *)malloc(sizeof(struct node *));
  new1->data=item;
  if(start==NULL)
 {
  new1->next=NULL;
  start=new1;
 }
 else
 {
  new1->next=start;
  start=new1;
 }
}

void insert_at_end()
{
 struct node *new1,*ptr;
  printf("Enter the item::");
  scanf("%d",&item);
  new1=(struct node*)malloc(sizeof(struct node));
  new1->data=item;
  new1->next=NULL;
  if(start==NULL)
  {
	start=new1;
  }
  else
  {
     ptr=start;
     while(ptr->next!=NULL){
        ptr=ptr->next;
        ptr->next=new1;
    }
	// ptr=ptr->next;
    // ptr->next=new1;
  }
}

void insert_at_loc()
{
 struct node *ptr,*new1;
 int i;
 i=1;
 ptr=start;
  printf("Enter the item::");
  scanf("%d",&item);
  printf("\nEnter the Location::");
  scanf("%d",&loc);
 if(start==NULL)
 {
	printf("\n insertion not possible)");
	return;
  }
  else{
	 while(i<loc)
	{
		ptr=ptr->next;
		i=i+1;
	}
	new1=(struct node*)malloc(sizeof(struct node));
	new1->data=item;
	new1->next=ptr->next;
	ptr->next=new1;
      }
}

void del_begin()
{
  struct node *ptr;
  if(start==NULL)
  {
	printf("\n List is empty");
	return;
  }
  else
  {
	ptr=start;
	start=start->next;
	printf("\n The Deleted Element is=%d",ptr->data);
	free(ptr);
  }
}

void del_end()
{
 struct node *ptr,*temp;
  if(start==NULL)
  {
	printf("\n List is empty");
	return;
  }
  else if(start->next==NULL)
  {
	ptr=start;
	start=NULL;
	printf("\n The Deleted Element is=%d",ptr->data);
	free(ptr);
  }
  else
  {
	ptr=start;
	while(ptr->next!=NULL)
	{
	   temp=ptr;
	   ptr=ptr->next;
	}
	   temp->next=NULL;
	   printf("\n The Deleted Element is=%d",ptr->data);
	   free(ptr);
  }
}

void del_loc()
{
 struct node *ptr,*temp;
 int i;
 printf("Enter the Location::");
 scanf("%d",&loc);
 if(start==NULL)
  {
	printf("\n List is empty");
	return;
  }
  else if(start->next==NULL)
  {
	printf("\n Deletion not possible");
  }
  else
  {
	ptr=start;
	i=1;
	while(i<loc)
	{
	   temp=ptr;
	   ptr=ptr->next;
	   i=i+1;
	}
	printf("\n The Deleted Element is=%d",ptr->data);
	temp->next=ptr->next;
	free(ptr);
   }
}

void traverse(struct node *ptr)
{
  ptr=start;
  if(start==NULL)
  {
     printf("No node exist in link list");
     return;
   }
  else{
	while(ptr!=NULL)
       {
		printf("%d\n",ptr->data);
		ptr=ptr->next;
       }
     }
}



