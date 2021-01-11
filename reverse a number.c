#include<stdio.h>
void main()
{
	int i,n,rev=0,rem,number;
	printf("enter the no\n");
	scanf("%d",&n);
	number=n;
	while(n>0)
	{	
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
			
	}printf("number is:%d",rev);
}
