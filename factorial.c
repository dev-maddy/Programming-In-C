#include<stdio.h>
int fact1();
void main()
{
	int n,sum;
	printf("enter the no:\n");
	scanf("%d",&n);
	fact1(n);
	printf("%d",fact1(n));
}
int fact1(int n)
	{
		int sum=0;
		if(n==1)
			{
				return 1;
			}
		else
			{
				return n*fact1(n-1);
			}
	}
