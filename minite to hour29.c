#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the time in minutes:\n");
    scanf("%d",&a);
    b=a/60;
    c=a%60;
    printf("the time in hour and minute is=%d:%d",b,c);
}
