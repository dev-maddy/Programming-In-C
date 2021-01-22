#include<stdio.h>
#include<stdlib.h>
#define max 10
int queue[max];
int isempty();
int isfull();
void enqu();
void dequ();
void display();
int front=-1,rear=-1;
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
	if(front==-1)
		return 1;
	else
		return 0;
}
int isfull()
{
	if(front==(rear+1) % max)
		return 1;
	else
		return 0;
}
void enqu()
	{
		if(isfull())
			printf("full");
		else
		{
		int ele;
		printf("enter the element\n");
		scanf("%d",&ele);
		if(front==-1)
			front=0;
		rear=(rear+1)%max;
		queue[rear]=ele;
		}
	}
void dequ()
	{
		if(isempty())
			printf("Empty");
		else
		{
		printf("The deleted element is: %d",queue[front]);
		front++;
		}		
	}
void display()
	{
		int i;
		for(i=0;i<max;i++)
			printf("%d->",queue[i]);
	}






