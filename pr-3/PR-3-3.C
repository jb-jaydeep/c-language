#include<stdio.h>
#include<conio.h>

main()
{
	long long int a;
	int b = 0;
	clrscr();
	printf("enter any number:");
	scanf("%lld",&a);
	do
	{
		b++;
		a/=10;
	}while(a!=0);
	printf("digits : %d",b);
	getch();
}