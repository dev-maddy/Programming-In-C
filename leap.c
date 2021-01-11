#include<stdio.h>
void main()
	{
		int n;
		printf("enter the year");
		scanf("%d",&n);
		if(n%4==0 && n%100!=0 && n%400!=0)
		{
			printf("it is leap");
		}
		else
			printf("not a leap");
	}

