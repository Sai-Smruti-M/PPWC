#include<stdio.h>
#define max 5
	int stack[max];
	int top=-1;
	int isFull()
	{
		if(top==max-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int isEmpty()
	{
		if(top==-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	void push(int data)
	{
		if(isFull())
		{
			printf("Stack Overflow\n");
			return;
		}
		top=top+1;
		stack[top]=data;	
	}
	int pop()
	{
	int value;
		if(isEmpty())
		{
			printf("Stack UNderflow\n");
			exit (1);
		}
		value=stack[top];
		top=top-1;
		return value;
	}
	void display()
	{
	int i;
	if(top==-1)
	{
		printf("empty stack\n");
	}
	for(i=top;i>=0;i--)
	{
	printf("%d\n",stack[i]);
	printf("\n");
	}	
	}
	int main()
	{
	int choice,data;
	
	while(1)
	{
	printf("\n");
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.display\n");
	printf("4.exit\n");
	printf("enter choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("enter data to be pushed:\n");
		scanf("%d",&data);
		push(data);
		break;
	case 2:
	    data=pop();
		printf("deleted element\n",data);
		break;
	case 3:
		display();
		break;
	case 4:
	    free(stack);
	    break;
	   
	  default:
	   printf("invalid choice!");
	  }
	   }return 0;
	   }
	
	 

