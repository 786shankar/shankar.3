#include <stdio.h>
void main() 
{
	char a[50];
	int i,count=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>'0'&&a[i]<'9')
		{
			count=count+1;
		}
	}
	printf("\nthe  numbers in the line are:%d",count);
}
