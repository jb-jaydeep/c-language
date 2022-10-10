#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,f=1;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)

	f=f*i;
	printf("factorial of %d is: %d\n",n,f);

	getch();

}