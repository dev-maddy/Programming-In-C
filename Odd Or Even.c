#include<stdio.h>
void main()
{
	int n,count1=0,count2=0,x;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n>0)
	{	
		x=n%10; 
		n/=10;
		if(x!=0 && x%2==0)
		{
			count1++;
		}
		else if(x!=0)
		{
			count2++;
		}
		
	}
	printf("%d %d",count1,count2);
}
