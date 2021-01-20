#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*top=NULL,*p;
int ch;
void push();
void pop();
void peep();
void peek();
int isempty();
void main()
	{
		while(1)
		{
			int ele;
			printf("1.push\t2.pop\t3.peep\t4.peek\t5.exit\t");
			scanf("%d",&ch);
			switch(ch)
			{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: peep();
				break;
			case 4: peek();
				break;
			case 5:exit(1);
				break;
			default:printf("Invalid Option");
				break;	
			}
		}
	}
int isempty()
	{
		if(top==NULL)
		{
			printf("Stack Is Empty\n");
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
	printf("Enter the Element\n");
	scanf("%d",&ele);
	p=(struct node*)malloc(sizeof(struct node));
	p->data=ele;
	p->next=NULL;
	if(top==NULL)
	{
	    top=p;
	}
	else
	{
	    p->next=top;
	    top=p;
	}
}
void peep()
{
	p=top;
	if(isempty())
	{
	
	}
	else
	{
		while(p!=NULL)
		{
			printf("%d-> ",p->data);
			p=p->next;
		}
		printf("NULL");

	}
}
void pop()
{
	p=top;
	if(isempty())
	{}
	else
	{
	printf("the deleted element is: %d\n",top->data);
	top=top->next;
	free(p);
	peep();
	}
}
void peek()
	{
	if(isempty())
	{}
	else
	{
		printf("the top most element is:%d\n",top->data);
	}
	}










			

























	
	

