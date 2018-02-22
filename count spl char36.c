#include <stdio.h>
void main() 
{
	char a[50];
	int i,count=0,sum=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='z')
		{
			count=count+1;
		}
		else
		{
		    sum=sum+1;
		}
	}
	printf("\nthe  numbers in the line are:%d",sum);
}
