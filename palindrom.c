#include<stdio.h>
void main()
{
	int n,num=0,rem,i,x=0,xum;
	printf("enter the number");
	scanf("%d",&n);	
	num=n;
	while(n>0)
	{
		rem=n%10;
		x=(x*10)+rem;
		n/=10;	
	}	
	printf("%d\n",x);
	if(num==x)
	{
		printf("palindrom");
	}
	else
	{
		printf("not a palindrom");
	}

}
