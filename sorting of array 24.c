#include<stdio.h>
void main()
{
    int a[100000],i,j,k,o;
    printf("enter the size of array\n");
    scanf("%d",&o);
    printf("enter the values of array\n");
    for(i=0;i<o;i++)
    {
        scanf("%d\t",&a[i]);
    }
    for(i=0;i<o;i++)
    {
        for(j=i+1;j<o;j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    for(i=0;i<o;i++)
    {
        printf("%d\t",a[i]);
    }
}
