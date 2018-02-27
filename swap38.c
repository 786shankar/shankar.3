#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the two numbers :");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("the numbers after swapping:%d %d",a,b);
}
swap(int *x,int *y)
{
    int k;
    k=*x;
    *x=*y;
    *y=k;
    printf("the numbers after swapping :%d %d",x,y);
}
