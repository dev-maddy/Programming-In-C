#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
}*front=NULL,*rear=NULL,*temp,*p;
int isempty();
void enqu();
void dequ();
void display();
int ch;
void main()
{
	while(1)
	{
		printf("Enter The Choice\n");
		printf("1.enqu\t2.dequ\t3.display\t4.exit\t");
		scanf("%d",&ch);
		switch(ch)
		{	
			case 1:enqu();
				break;
			case 2:dequ();
				break;
			case 3:display();
				break;
			case 4:exit(1);
				break;
			default:printf("Invalid Choice");
				break;
		}	
	}
}
int isempty()
{
	if(front==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void enqu()
{
	int ele;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element\n");
	scanf("%d",&ele);
	temp->data=ele;
	if(isempty())
	{
		front=temp;
		rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
		rear->next=front;
	}
}
void dequ()
{	
	if(isempty())
		printf("Queue Is empty\n");
	else
	{
		p=front;	
		printf("deleted Element is : %d\n",p->data);
		if(front==rear)
			front=rear=NULL;
		else
		{
			front=front->next;		
			p->next=NULL;
			free(p);
			rear->next=front;
		}
	}
}
void display()
{
	p=front;
	do
	{
		printf("%d->",p->data);
		p=p->next;
	}while(p!=front);
	printf("NULL\n");
}
	















	
	












