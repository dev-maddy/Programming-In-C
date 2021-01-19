#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*head,*p,*old,*temp,*n,*s;
int main()
{
	int ch;
void insert_beg();
void insert_end();
int insert_mid();
void delete_beg();
void delete_end();
int delete_mid();
void display();
void count();
void reverse();
	
while(1)
	{
	printf("\t1.insert\t2.Delete\t3.display\t4.count\t5.reverse\t6.exit\t");
	scanf("%d",&ch);
	switch(ch)
		{
		case 1: printf("1.insert_beg_2.insert_end_3.insert_pos");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1: insert_beg();
					break;
				case 2: insert_end();
					break;
				case 3: insert_mid();
					break;
				default:exit(1);
			}
			break;
		case 2: printf("1.delete_beg_2.delete_end_3.delete_mid");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:delete_beg();
					break;
				case 2:delete_end();
					break;
				case 3:delete_mid();
					break;
				default:exit(1);
			}
			break;
		case 3: display();
			break;
		case 4:count();
			break;
		case 5:reverse();
			break;
		case 6:exit(0);
		default: printf("\tinvalid\t");
			break;
		}
		
	}
	return 0;
}
void insert_beg()
{
	int ele;
	printf("enter the element\n");
	scanf("%d",&ele);
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=ele;
	temp->next=NULL;
	temp->prev=NULL;
	if(head==NULL)
	{
		
		head=temp;
	}
	else
	{	
		temp->next=head;
		temp->prev=temp;
		head=temp;
	}
}
void insert_end()
{
	int ele;
	printf("enter the element\n");
	scanf("%d",&ele);
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=ele;
	temp->next=NULL;
	temp->prev=NULL;
	if(head==NULL)
	{	
		head=temp;
	}
	else
	{
		p=head;
		while(p->next!=NULL)
			p=p->next;
		p->next=temp;
		temp->prev=p;
	}
}
int insert_mid()
	{
	int ele,pos,i;
	printf("enter the element\n");
	scanf("%d",&ele);
	printf("Enter position to be Entered\n");
	scanf("%d",&pos);
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=ele;
	temp->next=NULL;
	temp->prev=NULL;
	if(head==NULL)
	{
		printf("\tlist is empty\t");
	}
	else if(head!=NULL)
	{
		p=head;
		old=head;
		for(i=0;i<pos-1;i++)
		{
			old=p;
			p=p->next;
			if(p==NULL)
			{
				printf("Cannot Make");
				return;
			}
		}
		old->next=temp;
		temp->prev=old;
		temp->next=p;
		p->prev=temp;		
	}
	return 0;
	}
void delete_beg()
	{
		p=head;
		head=head->next;
		free(p);
	}
void delete_end()
	{
		p=head;
		while(p->next->next!=NULL)
			p=p->next;
		n=p->next;
		p->next=NULL;
		free(n);
	}
int delete_mid()
	{	
		int pos,i;
		p=head;
		n=head;
		printf("enter the position to be delete\n");
		scanf("%d",&pos);
		for(i=0;i<pos-1;i++)
			{
				old=p;
				p=p->next;
				if(p==NULL)
				{
					printf("can't make:");
					return;
				}
			}
		s=p->next;
		old->next=s;
		s->prev=old;
		free(p);					
	}
void count()
{
	int i,c=0;
	p=head;
	while(p!=NULL)
	{
		c++;
		p=p->next;
	}
	printf("The No of List is: %d",c);
}
void reverse()
{
	int a[100],c=0;
	while(p!=NULL)
		{
		a[c]=p->data;
		p=p->next;
		}
	while(c>0)
		{
		printf("%d",a[c]);
		c--;
		}
}
void display()
	{	
		if(head==NULL)
		{
			printf("List is Empty\t");
		}
		else
		{
			p=head;
			while(p!=NULL)
			{	
			printf("%d->",p->data);
			p=p->next;
			}
		}
	}
