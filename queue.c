#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX];
int front=-1,rear=-1;
int ch;
int isempty();
int isfull();
void enqu();
void dequ();
void display();
void main()
	{
		while(1)
		{
			printf("Enter the Choice\n");
			printf("1.Enquee\t2.Dequeue3\t3.display\t4.exit\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1: enqu();
					break;
				case 2: dequ();
					break;
				case 3: display();
					break;
				case 4: exit(1);
					break;
				default:printf("Invalid Optiom\n");
					break;
			}
		}
	}
int isempty()
	{
		if(front==-1 || front>rear)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
int isfull()
	{
		if(rear==MAX-1)
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
		if(isfull())
		{
			printf("Queue Is Full\n");		
		}
		else
		{
			printf("Enter the elememnt\n");
			scanf("%d",&ele);
			if(front==-1)
				front=0;
				rear++;
			queue[rear]=ele;
		}
	}
void dequ()
	{
		if(isempty())
		{
			printf("Queue Is Empty\n");				
		}
		else
		{
			printf("The Deleted Element Is: %d",queue[front]);
			front++;
		}
	}
void display()
	{
		int i;
		if(isempty())
		{
		printf("Queue Is Empty\n");
		}
		else
		{
			for(i=front;i<=rear;i++)
			{
				printf("%d->",queue[i]);
			}
		}
	}			
		















