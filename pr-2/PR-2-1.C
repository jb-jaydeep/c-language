#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	clrscr();
	printf("enter a:");
	scanf("%c",&a);
	if(a>='A' && a<='Z')
	{
		printf("a is uppercase");
	}
	else if(a>='a' && a<='z')
	{
		printf("a is lowercase");
	}
	else if(a>='0'&& a<='9')
	{
		printf("a is number");
	}
	else
	{
		printf("a is special character");
	}
	getch();
}