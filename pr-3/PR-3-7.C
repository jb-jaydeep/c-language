#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	int a=0;
	int b=1;
	int c=a+b;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);

	printf("fibonacci series: %d, %d, ",a,b);

	for(i=3;i<=n;++i)
	{
	printf("%d, ",c);
	a=b;
	b=c;
	c=a+b;
	}

	getch();

}