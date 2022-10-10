#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,a=0;

	clrscr();
	printf("enter a positive number:");
	scanf("%d",&n);
	if (n==0 || n==1)
	a = 1;

	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
		a=1;
		break;
		}
	}
	 if(a==0)
		printf("%d is prime number, ",n);
	 else
		printf("%d is not a prime number",n);

	getch();

}