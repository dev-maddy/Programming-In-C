#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j,k,prod,result;
	printf("a");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{	
			scanf("%d",&a[i][j]);
		}
	}
	printf("b");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{	
			scanf("%d",&b[i][j]);
		}
	}
	if(j==i)
{
	for(i=0;i<2;i++)
	{
		for(k=0;k<2;k++)
		{
		result=0;
			for(j=0;j<2;j++)
				{
					prod=a[i][j]*b[j][k];
					result=result+prod;
				}
				c[i][k]=result;
		}
	}
	printf("result \n");
	for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
				{
					printf("%d\t",c[i][j]);
				}
			printf("\n");
		}
}
	else
		printf("no");
}

