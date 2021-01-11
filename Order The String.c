#include<stdio.h>
void main()
{
	char a[10],temp;
	int i=0,j,count=0;
	printf("\nENter thestring:");
	scanf("%s",a);
	while(a[i]!=0)
	{
		count++;
		i++;
	}
	for(j=0;j<count;j++)
	{
		for(int k=j+1;k<count;k++)
			{
				if(a[j]	> a[k]){
					temp=a[j];
					a[j]=a[k];
					a[k]=temp;
				}	
			}
	}
	printf("ORDER:");
	for(j=0;j<count;j++){
		printf("%c",a[j]);
	}
}
