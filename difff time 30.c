#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g,h,i;
    printf("enter the large hour and minute");
    scanf("%d%d",&a,&b);
    printf("\nenter the minimum hour and minute :\t");
    scanf("%d%d",&c,&d);
    e=a*60+b;
    f=c*60+d;
    g=e-f;
    h=g/60;
    i=g%60;
    printf("\nthe difference is =%d:%d",h,i);
}
