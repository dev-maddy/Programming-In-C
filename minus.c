#include<stdio.h>
void main()
{
	int n,sum;
	printf("enter the num");
	scanf("%d",&n);	
	sum=n*(-1);
	if(sum<0)
	{
		printf("positive");
	}
	else
	{
		printf("negative");
	}
}
