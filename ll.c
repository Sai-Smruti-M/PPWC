#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node *createNode(struct node *head,int val)
{
	struct node *p,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->link=NULL;
	
    p=head;
    if(p)
    {
    	while(p->link!=NULL)
    	{
    	 p=p->link;
    	 //p->link=temp;
    	 }
    	 p->link=temp;
    	 return head;
    	}
    else
    {
    	head=temp;
    	return head;
    }
  }
 struct node *return_at_the_beginning(struct node *head,int val)
   {
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=val;
   temp->link=head;
   head=temp;
   return head;
   }
 struct node *return_at_the_end(struct node *head,int val)
   {
   struct node *newn,*temp;
   newn=(struct node*)malloc(sizeof(struct node));
   newn->data=val;
   newn->link=NULL;
   temp=head;
   
   while(temp->link!=NULL)
   {
   		temp=temp->link;
      
   }
   temp->link=newn;
   return head;
   }
  struct node *insert_at_any_position(struct node *head,int position,int val)
   {
   		if(position==1)
   		{
   		  return_at_the_beginning(head,val);
   		 }
   		struct node *newn;
   		newn=(struct node*)malloc(sizeof(struct node));
   		newn->data=val;
   		newn->link=NULL;
        int c=0;
   		struct node *temp=head;
   		
   		while(temp!=NULL)
   		{
   	     	c++;
   	     	if(c==position)
   	     	{
   	     	  newn->link=temp->link;
   	     	  temp->link=newn;
   	     	  break;
   	     	 }
   	     }
   	     return head;
   	 }
   	 struct node *delete_any(struct node *head,int pos)
   	 {
   	    if(pos==1)
   	    {
   	    	head=head->link;
   	    	return head;
   	    }
   	    else
   	    {
   	    int c=1;
   	    struct node *temp=head;
   	 	while(temp!=NULL)
   	 	{
   	 		
   	 		if(c==(pos-1))
   	 		{
   	 			temp->link=temp->link->link;
   	 		}
   	 		temp = temp->link;
   	 		c++;
   	 	}
   	 	return head;
   	 	}
   	 }
   	 		
   	 
   	     		
   			
   		
   																																																																
   
 void display(struct node *head)
 {
 	struct node *p;
 	if(head==NULL)
 	{
 		printf("Empty List\n");
 		return 1;
 	}
 	p=head;
 	printf("List is :\n");
 	while(p!=NULL)
 	{
 		printf("%d->\t",p->data);
 		p=p->link;
 	}
 		printf("\n");
 	}
 	
 	int main()
 	{
 		struct node *head=NULL;
 		int val1,val2,val3,val4,val5,pos,pos1;
 		printf("Enter value1:");
 		scanf("%d",&val1);
 		printf("Enter value2:");
 		scanf("%d",&val2);
 		printf("Enter value3:");
 		scanf("%d",&val3);
 		 head=createNode(head,val1);
 		 head=createNode(head,val2);
 		 head=createNode(head,val3);
 		 
 		 display(head);
 		 printf("Enter value4 to be inserted at the beginning:");
 		scanf("%d",&val4);
 		head=return_at_the_beginning(head,val4);
 		display(head);
 		 printf("Enter value5 to be inserted at the end:");
 		scanf("%d",&val5);
 		head=return_at_the_end(head,val5);
 		display(head);
 		 printf("Enter value6 to be inserted at any position:");
 		scanf("%d",&val5);
 		 printf("Enter position:");
 		scanf("%d",&pos);
 		head=insert_at_any_position(head,pos,val5);
 		display(head);
 		printf("Enter position to be deleted from:");
 		scanf("%d",&pos1);
 		head=delete_any(head,pos);
 		display(head);
 		
 		 
 	}
 		 
 	
 
