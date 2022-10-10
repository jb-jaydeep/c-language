#include<stdio.h>
#include<conio.h>

main()
{
	int n, sum,fd,ld;
	int b = 0;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);
	ld=n%10;
	fd=n;
	while(n>10)
	{
		n =n/10;

	}
	fd=n;
	sum=fd + ld;
	printf("sum of first and last digits : %d",sum);
	getch();
}