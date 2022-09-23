#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("enter the value of a and b :");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a:%d\n",a);
	printf("b:%d",b);
	getch();
}