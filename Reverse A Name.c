#include<stdio.h>
void main()
{
       char a[10];
	int i,count=0,j;
	printf("enter the name:");
	scanf("%s",a);
         for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
printf("\nthe lenth is :%d",count);
  j=count-1;
 for(i=j;a[i]>='\0';i--)
{
 printf("%c",a[i]);
}
}
