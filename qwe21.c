#include<stdio.h>
void main()
{
    int n,a,d,c,i;
    printf("enter he valuesof n,a,c");
    scanf("%d\t%d\t%d\t",&n,&a,&c);
    for(i=0;i<n;i++)
    {
        d=d+a+i*c;
    }
    printf("%d",d);
}
