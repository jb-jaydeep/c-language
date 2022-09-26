#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("enter a value of a:");
	scanf("%d",&a);
	printf("enter a value of b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;

	printf("value after swapping:\n");
	printf("value of a :%d\n",a);
	printf("value of b :%d",b);

	getch();
}