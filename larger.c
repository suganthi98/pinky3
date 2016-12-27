#include<stdio.h>
int main()
{
int a,b,c;
printf("the a,b and c values is  \n");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
printf("the a value is larger ",&a);
else
if(b>a && b>c)
printf("the b values is larger ",&b);
else
printf("the c value is larger ",&c);
}
