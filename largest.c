#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a<c && b<c)
printf("%d",c);
if(a<b && b>c)
printf("%d",b);
if(a>b && a>c)
printf("%d",a);
}
