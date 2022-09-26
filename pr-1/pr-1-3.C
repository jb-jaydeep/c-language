#include<stdio.h>
#include<conio.h>
main()
{
	float a,b;
	clrscr();
	printf("enter temp. in celsius:");
	scanf("%f",&a);
	b=(1.8*a)+32;
	printf("temp. in fahrenheit:%f",b);
	getch();
}