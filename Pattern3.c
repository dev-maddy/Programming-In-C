#include<stdio.h>
void main()
{
	int i,j,k,n,l,s;
	printf("enter the number\n");
	scanf("%d",&n);
	s=n-1;
	for(i=1;i<=n;i++)
	{  
		for(j=1;j<=s;j++)
		{	
			printf(" ");
			
		}
		s--;
		for(k=1;k<=i;k++)
		{
			printf("*");
			printf(" ");
		}
	
		printf("\n");
	}
 }
	



