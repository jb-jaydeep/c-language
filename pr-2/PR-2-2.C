#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("Enter a :");
	scanf("%d",&a);
	(a%2==0)
	       ?printf("a is even.")
	       :printf("a is odd.");

	getch();
}