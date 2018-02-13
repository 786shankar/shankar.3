#include<stdio.h>
void main()
{
    int a[10000],i,o;
    printf("enter the size of array\n");
    scanf("%d",&o);
    printf("enter the values of array\n");
    for(i=0;i<o;i++)
    {
        scanf("%d\t",&a[i]);
    }
    for(i=0;i<o;i++)
    {
        printf("%d\t%d\n",a[i],i);
    }
}
