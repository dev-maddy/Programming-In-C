#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int ch;
int stack[MAX];
void main()
{
int isempty();
int isfull();	
void push();
void pop();
void peek();
void peep();

	while(1)
	{
	printf("Enter The Choice\n");
	printf("1.Push\t2.pop\t3.peek\t4.peep\t5.exit\n");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
				break;
			case 2:pop();
				break;
			case 3:peek();
				break;
			case 4:peep();
				break;
			case 5:exit(1);
				break;
			default : printf("Invalid");
				break;
		}
	
	}
}
int isempty()
	{
		if(top==-1)
		{
			printf("Stack is Empty\n");
			return 1;
		}
		else
		{
			return 0;
		}
	}
int isfull()
	{
		if(top>=MAX-1)
		{
			printf("Stack Is Full\n");
			return 1;
		}
		else
		{
			return 0;
		}
	}
void push()
	{
		int ele;
		if(isfull())
		{
			printf(" ");
		}
		else
		{
			printf("Enter the Element\n");
			scanf("%d",&ele);
			top++;
			stack[top]=ele;
		}
	}
void pop()
	{
		int n;
		if(isempty())
		{
			printf(" ");
		}
		else
		{
			n=stack[top];
			top--;
			printf("deleted element Is:\t%d",n);
		}
	}
void peek()
	{
		int i;
		if(isempty())
		{
			printf("The stack is Empty\t");
		}
		else
		{
			printf("The Stack Elements Are:\n");
			for(i=top;i>=0;i--)
			{
				printf("%d->",stack[i]);
			}
	
		}
	}
void peep()
	{
		if(isempty())
		{
			printf("the stack is empty;\n");
		}
		else
		{
			printf("the top element is:->%d",stack[top]);
		}
	}
