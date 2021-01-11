#include<stdio.h>
void main()
{
	int i,j,k,n;
	char ch='*';
	printf("Enter n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	for(j=n;j>=i;j--)
	{
		printf("%c",ch);
	}
	printf("\n");
	}
}
