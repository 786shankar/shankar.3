#include<stdio.h>
void main()
{
    int a[100],i,j,max=0;
    printf("enter the number of array elements");
    scanf("%d",&j);
    printf("enter the array elements");
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<j;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("the largest number is %d",max);
}
