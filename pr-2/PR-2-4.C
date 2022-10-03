#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	clrscr();

	printf("enter M for monday.\n");
	printf("enter T for tuesday.\n");
	printf("enter W for wednesday.\n");
	printf("enter t for thursday.\n");
	printf("enter F for friday.\n");
	printf("enter S for saturday.\n");
	printf("enter s for sunday.\n");
	printf("enter your choice :");
	scanf("%c",&a);
	switch(a)
	{
		case 'M':
			printf("monday");
			break;
		case 'T':
			printf("tuesday");
			break;
		case 'W':
			printf("wednesday");
			break;
		case 't':
			printf("thursday");
			break;
		case 'F':
			printf("friday");
			break;
		case 'S':
			printf("saturday");
			break;
		case 's':
			printf("sunday");
			break;
		default:
			printf("invalid choice");
	}


	getch();
}


