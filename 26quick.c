#include<stdio.h>
void main()
{
    int a[100000],i,j,s,h;
    printf("enter the size of array\n");
    scanf("%d",&h);
    printf("enter the values of array\n");
    for(i=0;i<h;i++)
    {
        scanf("%d\t",&a[i]);
    }
    for(i=0;i<h;i++)
    {
        for(j=i+1;j<h;j++)
        {
            if(a[i]<a[j])
            {
                s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }
    }
    printf("the maximum element is %d",a[i/2]);
}
