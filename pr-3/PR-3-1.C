#include<stdio.h>
#include<conio.h>

main()
{
	char ch = 'a';
	clrscr();
	printf("alphabets from a to z:\n");
	do
	{
		printf("%c ",ch);
		ch++;
	}while(ch<='z');
	getch();
}