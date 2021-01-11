#include<stdio.h>
#include<stdlib.h>
struct node
	{
		int data;
		struct node *next;
	}*head=NULL,*old,*p,*temp,*s;
int main()
	{
	int ch;
void insert_beg();
int insert_end();
int insert_pos();
void delete_beg();
void delete_end();
void delete_mid();
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
				case 3: insert_pos();
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
		int num;
		printf("enter the ELement:");
		scanf("%d",&num);
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=num;
		if(head==NULL)
		{
			temp->next=NULL;
			head=temp;
			
		}
		else
		{
			temp->next=head;
			head=temp;
		}

	}
int insert_end()
	{	
		int num;
		printf("enter the ELement:");
		scanf("%d",&num);
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=num;
		if(head==NULL)
		{
			temp->next=NULL;
			head=temp;
			
		}
		else
		{
			p=head;
			while(p->next!=NULL)
				p=p->next;
				p->next=temp;
		}
	return 0;
	}
int insert_pos()
	{
		int num,pos,i;
		printf("enter the ELement:");
		scanf("%d",&num);
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=num;
		if(head==NULL)
		{
			printf("\tThe List Is Empty\t");
				
		}
		else
		{	
			printf("enter the pos\n");
			scanf("%d",&pos);
			p=head;
			for(i=1;i<pos-1;i++)
				p=p->next;
			p->next=temp->next;
			p->next=temp;					
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
		while(p->next=!NULL)
			p=p->next;
		free(p);

	}
void delete_mid()
{		
		int i,pos;
		printf("enter the position to be deleted\n");
		scanf("%d",&pos);
		p=head;
		old=head;
		for(i=0;i<pos;i++)
		{
			old=p;
			p=p->next;
		}		
		s=p->next;
		old->next=s;
		free(p);
}	
void display()
	{
		if(head==NULL)
		{
			printf("\tThe list is Empty\t");
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
void count()
	{
		int c=0;
		p=head;
		while(p!=NULL)
		{
			c++;
			p=p->next;
		}
		printf("No Of Node is %d",c);
	}
void reverse()
	{
		int a[10],c=0;
		p=head;
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














