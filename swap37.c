#include<stdio.h>
swap(int x,int y);
void main()
{
    int a,b;
    printf("enter the two numbers :");
    scanf("%d %d",&a,&b);
    swap(a,b);
}
swap(x,y)
{
    int k;
    k=x;
    x=y;
    y=k;
    printf("the numbers after swapping :%d %d",x,y);
}
