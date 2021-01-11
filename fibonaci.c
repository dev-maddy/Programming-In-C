#include<stdio.h>
void main()
	{
		int n,i,sum0=0,sum1=1,sum2=1;
		printf("enter the number\n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{	
			sum1=sum0+(sum2-sum1);
			sum2=sum1+sum2;
			printf("%d",sum1);
		}
	}
