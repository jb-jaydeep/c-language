#include<stdio.h>
#include<conio.h>
main()
{
	int n,rev=0,cpy,rem;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);
	cpy=n;
	while(n!=0)
	{
		rem = n%10;
		rev = rev*10 + rem;
		n=n/10;
	}

	printf("your number \t:%d\n",cpy);
	printf("reverse number\t:%d\n",rev);
	if(cpy==rev)

	printf("your number is palindrome");

	else

	printf("your number is not palindrome");

	getch();

}