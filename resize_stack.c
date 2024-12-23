#include<stdio.h>
#include<stdlib.h>
    int size;
    int *stack;
    void createstack(int size)
    {
    stack=(int*)calloc(size,sizeof(int));
    }
	void resize(int size)
	{
	 stack=(int*)realloc(stack,size);
	}
	int top=-1;
	int isFull()
	{
		if(top==size-1)
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
			size=size+1;
			resize(size);
			printf("STACK RESIZED! TO INTIAL (SIZE +1) SO THAT UR NEW ELEMNT CAN BE ADDED!");
		}
		top=top+1;
		stack[top]=data;	
	}
	int pop()
	{
	int value;
		if(isEmpty())
		{
			printf("Stack Underflow\n");
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
		printf("EMPTY STACK\n");
	}
	for(i=top;i>=0;i--)
	{
	printf("%d\n",stack[i]);
	}	
	}
	int main()
	{
	 printf("Enter the size of your stack:");
	 scanf("%d",&size);
	 createstack(size);
	int choice,data;
	
	while(1)
	{
	printf("\n");
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.display\n");
	printf("4.exit\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("Enter data to be pushed:\n");
		scanf("%d",&data);
		push(data);
		break;
	case 2:
	    data=pop();
		printf("Deleted element\n",data);
		break;
	case 3:
		display();
		break;
	case 4:
	    free(stack);
	    exit(1);
	    break;
	   
	  default:
	   printf("invalid choice!");
	  }
	   }return 0;
	   }
	
	 

