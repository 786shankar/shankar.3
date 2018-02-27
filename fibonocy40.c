#include<stdio.h>
void main()
{
    int a,i,s=0,n=1,f=0;
    printf("enter the limit");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
      printf("%d",n);
      s=f+n;
      f=n;
      n=s;
    }
}
