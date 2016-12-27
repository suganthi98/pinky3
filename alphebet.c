#include<stdio.h>
int main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
printf("it is alphabet %c",c);
else
printf("it is not alphabet %c",c);
return 0;
}
